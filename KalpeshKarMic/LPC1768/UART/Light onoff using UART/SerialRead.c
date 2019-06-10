#include "LPC17xx.h"
uint32_t  SerialRead(void)
{
		while(((LPC_UART0->LSR)&0x01)!=0x01);   
		
		return LPC_UART0->RBR;/*receiving the data from RBR Register*/
		
}
