#include "key.h"
#include "delay.h"

void key_init(void)
{
    IOMUXC_SetPinMux(IOMUXC_UART1_CTS_B_GPIO1_IO18, 0);
    IOMUXC_SetPinConfig(IOMUXC_UART1_CTS_B_GPIO1_IO18, 0xF080);
    GPIO1->GDIR &= ~(1 << 18);
}

int key_getvalue(void)
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
