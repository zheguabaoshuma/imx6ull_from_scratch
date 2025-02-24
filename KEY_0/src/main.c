#include "imx6ull.h"
#include "clock.h"
#include "beep.h"
#include "led.h"
#include "delay.h"
#include "key.h"

int main(void)
{
    clock_enable_all_cg();
    beep_init();
    led_init();

    unsigned int counter = 0;

    while (1)
    {
        counter = (counter + 1) % UINT32_MAX;
        delay(1);
        if(counter % 200 == 0){
            if(key_getvalue() == KEY_PRESS){
                beep_on();
            }
            else{
                beep_off();
            }
        }
        if(counter % 1000 == 0){
            led_switch();
        }
    }
    return 0;
}

