#ifndef __CONFIGURE_H
#define __CONFIGURE_H

//定义CCM寄存器地址
#define CCM_CCGR0 *((volatile unsigned int*)0x020C4068)
#define CCM_CCGR1 *((volatile unsigned int*)0x020C406C)
#define CCM_CCGR2 *((volatile unsigned int*)0x020C4070)
#define CCM_CCGR3 *((volatile unsigned int*)0x020C4074)
#define CCM_CCGR4 *((volatile unsigned int*)0x020C4078)
#define CCM_CCGR5 *((volatile unsigned int*)0x020C407C)
#define CCM_CCGR6 *((volatile unsigned int*)0x020C4080)

//定义所需要用到的IO复用寄存器地址
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO03 *((volatile unsigned int*)0x020E0068)
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO03 *((volatile unsigned int*)0x020E02F4)

//定义配置GPIO寄存器
#define GPIO1_DR *((volatile unsigned int*)0x0209C000)
#define GPIO1_GDIR *((volatile unsigned int*)0x0209C004)

#endif


