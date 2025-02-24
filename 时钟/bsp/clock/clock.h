#ifndef _CLOCK_H
#define _CLOCK_H

#include "imx6ull.h"

#define ARM_PLL_TYPICAL_FREQ 996
#define SYSTEM_PLL_TYPICAL_FREQ 528
#define USB1_PLL_TYPICAL_FREQ 480

#define OSC24M 24

void Clock_EnableAllCCGR(void);

void Clock_Enable_CCGR_Module(uint32_t cg, uint32_t cgid);
void Clock_Disable_CCGR_Module(uint32_t cg, uint32_t cgid);

void ARM_PLL_Init(uint32_t outfreq);
void System_PLL_Init();
void USB1_PLL_Init();

void CommonSystemClock_Init();


#endif // !_CLOCK_H
