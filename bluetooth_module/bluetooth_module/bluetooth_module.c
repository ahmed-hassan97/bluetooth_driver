/*
 * bluetooth_module.c
 *
 * Created: 3/9/2020 9:09:22 PM
 *  Author: A
 */ 



#include "macro.h"


int main(void)
{
	CLEAR_BIT(DDRA,3);
	CLEAR_BIT(PORTA,3);
   Uart_init();
    while(1)
    {
	
		
		
		
			char c= Uart_Read();
			
			if(c == '1'){
				
				SET_BIT(PORTA,3);
			}
			
			if(c == '0'){
				
				CLEAR_BIT(PORTA,3);
			}
		
		
		
	    
  
    }
	
}