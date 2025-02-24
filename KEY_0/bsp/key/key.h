#ifndef _KEY_H
#define _KEY_H

#include<imx6ull.h>

enum key_value{
    KEY_PRESS = 0,
    KEY_RELEASE = 1
};

void key_init(void);
int key_getvalue(void);

#endif