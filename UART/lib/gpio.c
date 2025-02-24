#include "gpio.h"

void GPIO_Init(gpio_pin_config_t config, GPIO_Type *gpio, uint32_t pin){
    if(config.direction == kGPIO_DigitalOutput){
        gpio->GDIR |= (1 << pin);
        GPIO_Pin_Write(gpio, pin, config.outputLogic); // set 1 default
    }
    else{
        gpio->GDIR &= ~(1 << pin);
    }
    uint32_t shift = pin < 16 ? pin : (pin - 16);

    if(pin < 16){
        switch(config.interruptMode){
            case kGPIO_IntLowLevel:
                gpio->ICR1 &= ~(0x3 << (shift * 2)),
                gpio->ICR1 |= (0x00 << (shift * 2));
                break;
            case kGPIO_IntHighLevel:
                gpio->ICR1 &= ~(0x3 << (shift * 2)),
                gpio->ICR1 |= (0x01 << (shift * 2));
                break;
            case kGPIO_IntRisingEdge:
                gpio->ICR1 &= ~(0x3 << (shift * 2)),
                gpio->ICR1 |= (0x2 << (shift * 2));
                break;
            case kGPIO_IntFallingEdge:
                gpio->ICR1 &= ~(0x3 << (shift * 2)),
                gpio->ICR1 |= (0x3 << (shift * 2));
                break;
            case kGPIO_IntRisingOrFallingEdge:
                gpio->EDGE_SEL |= (1 << pin);//set edge_sel, so that both risings and fallings on pads can generate intterupts
                break;
            default:
                break;
        }
    }
    else{
        switch(config.interruptMode){
            case kGPIO_IntLowLevel:
                gpio->ICR2 &= ~(0x3 << (shift * 2)),
                gpio->ICR2 |= (0x00 << (shift * 2));
                break;
            case kGPIO_IntHighLevel:
                gpio->ICR2 &= ~(0x3 << (shift * 2)),
                gpio->ICR2 |= (0x01 << (shift * 2));
                break;
            case kGPIO_IntRisingEdge:
                gpio->ICR2 &= ~(0x3 << (shift * 2)),
                gpio->ICR2 |= (0x2 << (shift * 2));
                break;
            case kGPIO_IntFallingEdge:
                gpio->ICR2 &= ~(0x3 << (shift * 2)),
                gpio->ICR2 |= (0x3 << (shift * 2));
                break;
            case kGPIO_IntRisingOrFallingEdge:
                gpio->EDGE_SEL |= (1 << pin);//set edge_sel, so that both risings and fallings on pads can generate intterupts
                break;
            default:
                break;
        }
    }
    GPIO1->ICR2 = 0xFFFFFFFF;
}

void GPIO_Pin_Write(GPIO_Type *gpio, uint32_t pin, uint32_t value)
{
    if((gpio->GDIR) & (1 << pin) == 0) return;
    if(value > 0){
        gpio->DR |= (1 << pin); 
    }
    else{
        gpio->DR &= ~(1 << pin);
    }
}

void GPIO_Enable_Int(GPIO_Type *gpio, uint32_t pin)
{
    gpio->IMR |= (1 << pin);
}

void GPIO_Disable_Int(GPIO_Type *gpio, uint32_t pin)
{
    gpio->IMR &= ~(1 << pin);
}

void GPIO_Clear_Int_Flag(GPIO_Type *gpio, uint32_t pin)
{
    gpio->ISR |= (1 << pin);//w1c
}
