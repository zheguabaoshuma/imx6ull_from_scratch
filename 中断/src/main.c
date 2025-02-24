#include "imx6ull.h"
#include "clock.h"
#include "beep.h"
#include "led.h"
#include "delay.h"
#include "key.h"
#include "int.h"

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
    unsigned int counter = 0;

    while (1)
    {
        counter = (counter + 1) % UINT32_MAX;
        delay(10);
        if(counter % 50 == 0){
            LED_Switch();
        }
    }
    return 0;
}

