#include "LPC17xx.h"
void SerialWrite(uint32_t val)
{
		while(((LPC_UART0->LSR)&0x20)!=0x20);   /*Check Line Status Register and wait for valid data.*/
		LPC_UART0->THR=val;                 /*Writing to the UART Transmit Holding Register.*/      
}
