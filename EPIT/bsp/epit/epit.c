#include "epit.h"
#include "int.h"
#include "led.h"
#include "beep.h"
#include "delay.h"

/*EPIT定时计算（秒）：T = (fdiv + 1) * ldr / clk */
void EPIT1_Init(uint32_t fdiv, uint32_t ldr)
{
    if(fdiv > 0xFFF) return;

    EPIT1->CR |= EPIT_CR_CLKSRC(0x1);//set clock source ipg_clk=66Mhz
    EPIT1->CR |= EPIT_CR_PRESCALAR(fdiv);//set prescalar
    EPIT1->CR |= EPIT_CR_RLD(0x1); //set-and-forget mode
    EPIT1->CR |= EPIT_CR_ENMOD(0x1); //set enmode
    EPIT1->CR |= EPIT_CR_OCIEN(0x1);

    EPIT1->LR = ldr;
    EPIT1->CMPR = 0;

    GIC_EnableIRQ(EPIT1_IRQn);
    IRQInt_Handler_Init(EPIT1_Int_Handler, EPIT1_IRQn, NULL);
    EPIT1->CR |= EPIT_CR_EN(0x1);//enable epit

}

void EPIT1_Int_Handler(uint32_t giccIar, void *params){
    if(EPIT1->SR & 0x1 == 1){
        LED_Switch();
        EPIT1->SR |= EPIT_SR_OCIF(1);
    }

}

void EPIT1_Clear(){
    EPIT1->CR &= ~EPIT_CR_EN(0x1);
    EPIT1->CR = 0;
}

void EPIT1_Start(uint32_t value){
    EPIT1->CR &= ~EPIT_CR_EN(0x1);
    EPIT1->CR = 0;

    EPIT1->CR |= EPIT_CR_PRESCALAR(0);
    EPIT1->CR |= EPIT_CR_RLD(0x1);
    EPIT1->CR |= EPIT_CR_ENMOD(0x1);
    EPIT1->CR |= EPIT_CR_OCIEN(0x1);

    EPIT1->LR = value;
    EPIT1->CMPR = 0;

    EPIT1->CR |= EPIT_CR_EN(0x1);
}

void EPIT2_Init(uint32_t fdiv, uint32_t ldr)
{
    if(fdiv > 0xFFF) return;

    EPIT2->CR |= EPIT_CR_CLKSRC(0x1);//set clock source ipg_clk=66Mhz
    EPIT2->CR |= EPIT_CR_PRESCALAR(fdiv);//set prescalar
    EPIT2->CR |= EPIT_CR_RLD(0x1); //set-and-forget mode
    EPIT2->CR |= EPIT_CR_ENMOD(0x1); //set enmode
    EPIT2->CR |= EPIT_CR_OCIEN(0x1);

    EPIT2->LR = ldr;
    EPIT2->CMPR = 0;

    GIC_EnableIRQ(EPIT2_IRQn);
    IRQInt_Handler_Init(EPIT2_Int_Handler, EPIT2_IRQn, NULL);
    //EPIT2->CR |= EPIT_CR_EN(0x1);//enable epit

}

uint32_t test(){
    Beep_ON();
    delay(100);
    Beep_OFF();
}

void EPIT2_Int_Handler(uint32_t giccIar, void *params){
    if(EPIT2->SR & 0x1 == 1){
        EPIT2_Clear();
        int counter = 0;
        if(GPIO1_DR_READ_BIT(18) == 0){
            Beep_ON();
            delay(100);
            Beep_OFF();
        }
        EPIT2->SR |= EPIT_SR_OCIF(1);
    }
}

void EPIT2_Clear(){
    EPIT2->CR &= ~EPIT_CR_EN(0x1);
    //EPIT2->CR = 0;
}

void EPIT2_Start(uint32_t value){
    EPIT2->CR &= ~EPIT_CR_EN(0x1);
    // EPIT2->CR = 0;

    // EPIT2->CR |= EPIT_CR_PRESCALAR(0);
    // EPIT2->CR |= EPIT_CR_RLD(0x1);
    // EPIT2->CR |= EPIT_CR_ENMOD(0x1);
    // EPIT2->CR |= EPIT_CR_OCIEN(0x1);

    EPIT2->LR = value;
    EPIT2->CMPR = 0;

    EPIT2->CR |= EPIT_CR_EN(0x1);
}

void EPIT2_Start_ms(uint32_t value_ms){
    EPIT2->CR &= ~EPIT_CR_EN(0x1);
    // EPIT2->CR = 0;

    // EPIT2->CR |= EPIT_CR_PRESCALAR(0);
    // EPIT2->CR |= EPIT_CR_RLD(0x1);
    // EPIT2->CR |= EPIT_CR_ENMOD(0x1);
    // EPIT2->CR |= EPIT_CR_OCIEN(0x1);

    EPIT2->LR = value_ms * 66000;
    EPIT2->CMPR = 0;

    EPIT2->CR |= EPIT_CR_EN(0x1);
}