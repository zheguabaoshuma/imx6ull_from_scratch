#include "beep.h"

void Beep_Init(void)
{
    IOMUXC_SetPinMux(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0);
    IOMUXC_SetPinConfig(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0x10B0);
    GPIO5->GDIR |= (1 << 1);
    GPIO5->DR |= (1 << 1);
}

void Beep_ON(void)
{
    GPIO5->DR &= ~(1 << 1);
}

void Beep_OFF(void)
{
    GPIO5->DR |= (1 << 1);
}

void Beep_Switch(void)
{
    if(GPIO5_DR_READ_BIT(1))
        Beep_ON();
    else
        Beep_OFF();
}
