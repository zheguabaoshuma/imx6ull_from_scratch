#ifndef _CLOCK_H
#define _CLOCK_H

#include "imx6ull.h"

void clock_enable_all_cg(void);

void clock_enable_cg_module(uint32_t cg, uint32_t cgid);
void clock_disable_cg_module(uint32_t cg, uint32_t cgid);

#endif // !_CLOCK_H
