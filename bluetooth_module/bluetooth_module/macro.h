/*
 * macro.h
 *
 * Created: 3/9/2020 9:45:32 PM
 *  Author: A
 */ 


#ifndef MACRO_H_
#define MACRO_H_


#include <util/delay.h>
#define F_CPU 8000000UL
#include <avr/io.h>
#define SET_BIT(REG,BIT) (REG |=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG &=~(1<<BIT))
#define toogle_bit(reg,bit) (reg ^=(1<<bit))
#define CLEAR_ALL(REG) (REG &=~(255<<0))
#define SET_ALL(REG) (REG |=(255<<0))
#define READBIT(reg,bit) ((reg >> bit) & 1)



#endif /* MACRO_H_ */