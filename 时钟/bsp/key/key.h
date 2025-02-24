#ifndef _KEY_H
#define _KEY_H

#include<imx6ull.h>

enum key_value{
    KEY_PRESS = 0,
    KEY_RELEASE = 1
};

void Key_Init(void);
int Key_GetValue(void);

#endif