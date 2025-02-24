#ifndef _KEY_H
#define _KEY_H

#include "imx6ull.h"
#include "int.h"
#include "beep.h"
#include "led.h"

enum key_value{
    KEY_PRESS = 0,
    KEY_RELEASE = 1
};

void Key_Init(void);
int Key_GetValue(void);

// GPIO1_IO18 interrupt
void GPIO1_IO18_Int_Init();
void GPIO1_IO18_Int_Handler(uint32_t giccIar, void *param);

#endif