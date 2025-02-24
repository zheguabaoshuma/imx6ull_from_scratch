#ifndef _EPIT_H
#define _EPIT_H

#include "imx6ull.h"

void EPIT1_Init(uint32_t fdiv, uint32_t ldr);
void EPIT1_Int_Handler(uint32_t giccIar, void *params);
void EPIT1_Clear();
void EPIT1_Start(uint32_t value);

void EPIT2_Init(uint32_t fdiv, uint32_t ldr);
void EPIT2_Int_Handler(uint32_t giccIar, void *params);
void EPIT2_Clear();
void EPIT2_Start(uint32_t value);
void EPIT2_Start_ms(uint32_t value_s);

#endif