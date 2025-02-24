#include "led.h"

void LED_Init(void)
{
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO03_GPIO1_IO03, 0);
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO03_GPIO1_IO03, 0x10B0);
    GPIO1->GDIR |= (1 << 3);
    GPIO1->DR |= (1 << 3);
}

void LED_ON(void)
{
    GPIO1->DR &= ~(1 << 3);
}

void LED_OFF(void)
{
    GPIO1->DR |= (1 << 3);
}

void LED_Switch(void)
{
    if(GPIO1_DR_READ_BIT(3))
        LED_ON();
    else
        LED_OFF();
}
