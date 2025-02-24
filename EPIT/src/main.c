#include "imx6ull.h"
#include "clock.h"
#include "beep.h"
#include "led.h"
#include "delay.h"
#include "key.h"
#include "int.h"
#include "epit.h"

int main(void)
{
    Int_Init();
    Clock_EnableAllCCGR();
    Beep_Init();
    LED_Init();
    GPIO1_IO18_Int_Init();
    Key_Init();
    ARM_PLL_Init(ARM_PLL_TYPICAL_FREQ);
    System_PLL_Init();
    USB1_PLL_Init();
    CommonSystemClock_Init();
    EPIT1_Init(0, 33000000);
    EPIT2_Init(0, 33000000);

    while (1)
    {
        
    }
    return 0;
}

