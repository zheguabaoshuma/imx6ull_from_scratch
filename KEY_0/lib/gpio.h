#ifndef _GPIO_H
#define _GPIO_H

#include"base_global.h"

#define GPIO1_DR_SET_BIT(x) GPIO1->DR |= (1 << x)
#define GPIO1_DR_CLR_BIT(x) GPIO1->DR &= ~(1 << x)
#define GPIO1_DR_READ_BIT(x) ((GPIO1->DR >> x) & 0x1)

#define GPIO2_DR_SET_BIT(x) GPIO2->DR |= (1 << x)
#define GPIO2_DR_CLR_BIT(x) GPIO2->DR &= ~(1 << x)
#define GPIO2_DR_READ_BIT(x) ((GPIO2->DR >> x) & 0x1)

#define GPIO3_DR_SET_BIT(x) GPIO3->DR |= (1 << x)
#define GPIO3_DR_CLR_BIT(x) GPIO3->DR &= ~(1 << x)
#define GPIO3_DR_READ_BIT(x) ((GPIO3->DR >> x) & 0x1)

#define GPIO4_DR_SET_BIT(x) GPIO4->DR |= (1 << x)
#define GPIO4_DR_CLR_BIT(x) GPIO4->DR &= ~(1 << x)
#define GPIO4_DR_READ_BIT(x) ((GPIO4->DR >> x) & 0x1)

#define GPIO5_DR_SET_BIT(x) GPIO5->DR |= (1 << x)
#define GPIO5_DR_CLR_BIT(x) GPIO5->DR &= ~(1 << x)
#define GPIO5_DR_READ_BIT(x) ((GPIO5->DR >> x) & 0x1)

#define GPIO1_GDIR_INPUT(x) GPIO1->GDIR &= ~(1 << x)
#define GPIO1_GDIR_OUTPUT(x) GPIO1->GDIR |= (1 << x)

#define GPIO2_GDIR_INPUT(x) GPIO2->GDIR &= ~(1 << x)
#define GPIO2_GDIR_OUTPUT(x) GPIO2->GDIR |= (1 << x)

#define GPIO3_GDIR_INPUT(x) GPIO3->GDIR &= ~(1 << x)
#define GPIO3_GDIR_OUTPUT(x) GPIO3->GDIR |= (1 << x)

#define GPIO4_GDIR_INPUT(x) GPIO4->GDIR &= ~(1 << x)
#define GPIO4_GDIR_OUTPUT(x) GPIO4->GDIR |= (1 << x)

#define GPIO5_GDIR_INPUT(x) GPIO5->GDIR &= ~(1 << x)
#define GPIO5_GDIR_OUTPUT(x) GPIO5->GDIR |= (1 << x)

#endif // _GPIO_H