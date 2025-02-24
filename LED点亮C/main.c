#include "configure.h"

void _register_init_(){
    CCM_CCGR0 = 0xFFFFFFFF;
    CCM_CCGR1 = 0xFFFFFFFF;
    CCM_CCGR2 = 0xFFFFFFFF;
    CCM_CCGR3 = 0xFFFFFFFF;
    CCM_CCGR4 = 0xFFFFFFFF;
    CCM_CCGR5 = 0xFFFFFFFF;
    CCM_CCGR6 = 0xFFFFFFFF;

    IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO03 = 0x5;
    IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO03 = 0x10B0;

    GPIO1_DR = 0x0;
    GPIO1_GDIR = 0x8;
}

void led_off(){
    GPIO1_DR = 0xFFFFFFFF;
}

void led_on(){
    GPIO1_DR = 0x0;
}

void delay(){
    volatile unsigned int time = 0x7ff;
    while(time--){};
}

void led_blink(volatile unsigned int n){
    led_off();
    for(int i = 0; i < n; i++){delay();};
    led_on();
    for(int i = 0; i < n; i++){delay();};
}

double test_ext;

int main(){
    _register_init_();

    while(1){
        led_blink(1000);
    }

    return 0;
}