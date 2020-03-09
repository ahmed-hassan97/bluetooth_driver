/*
 * uart.h
 *
 * Created: 3/9/2020 9:39:01 PM
 *  Author: A
 */ 


#ifndef UART_H_
#define UART_H_

#include "macro.h"

uint8_t Uart_Read();
void Uart_init();
void Uart_Write(uint8_t);
uint8_t Uart_available();
void Uart_Write_string(uint8_t *data);


#endif /* UART_H_ */