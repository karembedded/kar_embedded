#include "LPC17xx.h"
uint32_t uartReceive(void)
{
	uint32_t val;
	while(((LPC_UART0->LSR)&0x01)==0x01) 				/* The UARTn receiver FIFO is not empty. */
	{
						val= LPC_UART0->RBR;	
						return val;
	}
	
}