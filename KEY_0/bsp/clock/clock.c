#include "clock.h"

void clock_enable_all_cg(void)
{
    CCM->CCGR0 = 0xFFFFFFFF;
    CCM->CCGR1 = 0xFFFFFFFF;
    CCM->CCGR2 = 0xFFFFFFFF;
    CCM->CCGR3 = 0xFFFFFFFF;
    CCM->CCGR4 = 0xFFFFFFFF;
    CCM->CCGR5 = 0xFFFFFFFF;
    CCM->CCGR6 = 0xFFFFFFFF;
}

void clock_enable_cg_module(uint32_t cg, uint32_t cgid)
{
    if (cg > 6 | cgid > 31)
    {
        return;
    }
    uint32_t* reg = (uint32_t*)(&(CCM->CCGR0) + (cg << 5));
    *reg |= (3 << (cgid << 1));
}

void clock_disable_cg_module(uint32_t cg, uint32_t cgid)
{
    if (cg > 6 | cgid > 31)
    {
        return;
    }
    uint32_t* reg = (uint32_t*)(&(CCM->CCGR0) + (cg << 5));
    *reg &= ~(3 << (cgid << 1));
}
