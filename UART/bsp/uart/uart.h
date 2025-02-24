#ifndef _UART_H
#define _UART_H

#include "imx6ull.h"
#include "uartio.h"
void UART1_Init();

void UART_SoftReset(UART_Type *base);

void UART1_IO_Init();

void UART_Disable(UART_Type *base);

void UART_Enable(UART_Type *base);

void _putc(uint8_t c);

void _puts(uint8_t *s);

uint8_t _getc();

void uart_setbaudrate(UART_Type *base, unsigned int baudrate, unsigned int srcclock_hz);

void raise();

#endif


