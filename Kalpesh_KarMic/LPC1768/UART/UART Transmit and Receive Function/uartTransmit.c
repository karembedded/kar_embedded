#include "LPC17xx.h"
void uartTransmit(uint32_t val)
{
				if(((LPC_UART0->LSR)&0x20)==0x20)   		/* Check the UnTHR is empty or not.*/
				{
					LPC_UART0->THR=val; 
				}					
}