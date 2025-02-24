#include "imx6ull.h"
#include "clock.h"
#include "beep.h"
#include "led.h"
#include "delay.h"
#include "key.h"
#include "int.h"
#include "epit.h"
#include "uart.h"

int main(void)
{
    uint8_t c = 0;
    Int_Init();
    Clock_EnableAllCCGR();
    Beep_Init();
    LED_Init();
    Key_Init();
    GPIO1_IO18_Int_Init();
    ARM_PLL_Init(ARM_PLL_TYPICAL_FREQ);
    System_PLL_Init();
    USB1_PLL_Init();
    CommonSystemClock_Init();
    UART1_Init();
    EPIT1_Init(0, 33000000);
    EPIT2_Init(0, 33000000);
    if(((GPIO1->ICR2 >> 4) & (0x3)) == 3){
        _puts("In Falling Edge Mode\r\n");
    }
    else if (((GPIO1->ICR2 >> 4) & (0x3)) == 0)
    {
        _puts("In Low Level Mode\r\n");
    }
    while (1)
    {
        _puts("Input a char: ");
        c = _getc();
        _putc(c);
        _puts("\r\n");
        _puts("Your input is ");
        _putc(c);
        sprintf(" ascii is %d", c);
        _puts("\r\n");
        
    }
    return 0;
}

