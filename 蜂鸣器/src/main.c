#include "imx6ull.h"
#include "clock.h"
#include "beep.h"
#include "led.h"
#include "delay.h"

int main(void)
{
    clock_enable_all_cg();
    beep_init();
    led_init();
    while (1)
    {
        beep_on();
        led_on();
        delay(500);
        beep_off();
        led_off();
        delay(500);
    }
    return 0;
}

