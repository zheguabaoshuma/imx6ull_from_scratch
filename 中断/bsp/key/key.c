#include "key.h"
#include "delay.h"

void Key_Init(void)
{
    IOMUXC_SetPinMux(IOMUXC_UART1_CTS_B_GPIO1_IO18, 0);
    IOMUXC_SetPinConfig(IOMUXC_UART1_CTS_B_GPIO1_IO18, 0xF080);
    GPIO1->GDIR &= ~(1 << 18);
}

int Key_GetValue(void)
{
    if (GPIO1_DR_READ_BIT(18) == 0){
        delay(10);
        if (GPIO1_DR_READ_BIT(18) == 0)
            return KEY_PRESS;
        else
            return KEY_RELEASE;
    }
    else
        return KEY_RELEASE;
}

void GPIO1_IO18_Int_Init()
{
    gpio_pin_config_t config;
    config.direction = kGPIO_DigitalInput;
    config.interruptMode = kGPIO_IntFallingEdge;

    GPIO_Init(config, GPIO1, 18);
    GPIO_Enable_Int(GPIO1, 18);
    GIC_EnableIRQ(GPIO1_Combined_16_31_IRQn);

    IRQInt_Handler_Init((system_irq_handler_t)GPIO1_IO18_Int_Handler, GPIO1_Combined_16_31_IRQn, NULL);
}

void GPIO1_IO18_Int_Handler(uint32_t giccIar, void* param)
{
    //uint32_t state = Key_GetValue();
    if(GPIO1_DR_READ_BIT(18) == 0){
        delay(10);
        if(GPIO1_DR_READ_BIT(18) == 0){
            Beep_Switch();
            delay(100);
            Beep_Switch();
        }
    }
    GPIO_Clear_Int_Flag(GPIO1, 18);
}
