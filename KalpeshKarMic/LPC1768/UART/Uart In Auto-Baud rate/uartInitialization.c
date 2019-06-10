#include "LPC17xx.h"
void initialization(void)
{
		LPC_SC->PCONP |= (1<<3);     			 /*powering up the uart0.*/
		LPC_SC->PCLKSEL0 |=(0<<6);         /*Peripheral clock select for uart0.*/
		LPC_PINCON->PINSEL0 = 0x00000050;  /*selecting p0.2 and p0.3 as Tx and Rx.*/
		LPC_UART0->LCR = 0x00000003;       /*Configuring LCR register.*/
		LPC_UART0->FCR = 0x00000007;      /*Enable FIFO ,Clear Rx and Tx in FCR Register.*/
	
		LPC_GPIO1->FIODIR |=(1<<29); 		  /* p1.29 pin Direction*/
		LPC_UART0->ACR =0x01;							/* Auto Baud Rate  Control Register (Start the ACT) */
}
