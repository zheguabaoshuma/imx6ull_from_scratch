#include "uartio.h"
uint8_t public_buffer[100];

void int2string(int32_t i){
    uint8_t* bufptr = public_buffer;
    if(i < 0){
        *(bufptr++) = '-';
        i = -i;
    }
    else if(i == 0){
        *(bufptr++) = '0';
        *bufptr = 0;
        return;
    }
    uint32_t base = 1000000000;
    uint8_t flag = 0;
    while(base != 0){
        uint32_t high = i / base;
        uint32_t low = i % base;
        i = low;
        base = base / 10;
        if(high != 0) flag = 1;
        if(flag) *(bufptr++) = (uint8_t)('0' + high);
    }
    *bufptr = 0;
}

void sprintf(const char* s, ...){
    va_list args;
    va_start(args, s);
    
    char* p = s;
    while(*p){
        if((*p) == '%'){
            uint8_t next = *(p + 1);
            switch(next){
                case 'd':{
                    int32_t arg = va_arg(args, int);
                    int2string((int32_t)arg);
                    uint8_t* bp = public_buffer;
                    while(*bp) _putc(*(bp++));
                    p+=2;
                    break;
                } 
                default:
                    break;
            }
        }
        else if((*p) == '\\'){
            _putc(*(p++));
            _putc(*(p++));
        }
        else _putc(*(p++));
    }

}

