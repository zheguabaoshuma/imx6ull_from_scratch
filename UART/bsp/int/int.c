#include "int.h"
#include "beep.h"

system_irq_handler irqTable[NUMBER_OF_INT_VECTORS];
//extern void* _start;
static unsigned int irq_Nesting = 0; //中断嵌套计数

void Int_Init(void)
{
    GIC_Init();
    IRQInt_Table_Init();
    __set_VBAR((uint32_t)0x87800000);
}

void IRQInt_Handler_Init(system_irq_handler_t Default_Handler, IRQn_Type irq, void* param)
{
    irqTable[irq].irqHandler = Default_Handler;
    irqTable[irq].userParam = param;
}

void IRQInt_Table_Init(void)
{
    for (int i = 0; i < NUMBER_OF_INT_VECTORS; i++)
    {
        IRQInt_Handler_Init(Default_Handler, (IRQn_Type)i, NULL);
    }
}

void SystemIRQ_Handler(uint32_t giccIar)
{
    uint32_t irq = giccIar & 0x3FFU;
    if(irq >= 32 && irq < NUMBER_OF_INT_VECTORS){
        irq_Nesting++;
        irqTable[irq].irqHandler(giccIar, irqTable[irq].userParam);
        irq_Nesting--;
    }
    else return;
}

void Default_Handler(uint32_t giccIar, void *userParams)
{
    while(1){}
}
