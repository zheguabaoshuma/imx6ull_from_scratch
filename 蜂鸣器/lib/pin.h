#ifndef _PIN_H
#define _PIN_H

#include "base_global.h"
void IOMUXC_SetPinMux(uint32_t muxRegister, 
                            uint32_t muxMode, 
                            uint32_t inputRegister, 
                            uint32_t inputDaisy, 
                            uint32_t configRegister, 
                            uint32_t inputOnfield);

void IOMUXC_SetPinConfig(uint32_t muxRegister, 
                                uint32_t muxMode, 
                                uint32_t inputRegister, 
                                uint32_t inputDaisy, 
                                uint32_t configRegister, 
                                uint32_t configValue);

#endif // _PIN_H

