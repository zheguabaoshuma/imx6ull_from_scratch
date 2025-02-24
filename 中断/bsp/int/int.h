#ifndef _INT_H
#define _INT_H

#include "imx6ull.h"

typedef void (*system_irq_handler_t) (uint32_t giccIar, void *param);

typedef struct _system_irq_handler {
    system_irq_handler_t irqHandler;
    void *userParam;
} system_irq_handler;

void Int_Init(void);
void IRQInt_Handler_Init(system_irq_handler_t Default_Handler, IRQn_Type irq, void *param);
void IRQInt_Table_Init(void);

void SystemIRQ_Handler(uint32_t giccIar);
void Default_Handler(uint32_t giccIar, void* userParams);


#endif