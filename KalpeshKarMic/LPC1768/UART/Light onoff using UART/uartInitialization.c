#include "LPC17xx.h"
void initialization(void)
{
		LPC_SC->PCONP |= (1<<3);     			 /*powering up the uart0.*/
		LPC_SC->PCLKSEL0 |=(0<<6);         /*Peripheral clock select for uart0.*/
		LPC_PINCON->PINSEL0 = 0x00000050;  /*selecting p0.2 and p0.3 as Tx and Rx.*/
		LPC_UART0->LCR = 0x00000003;       /*Configuring LCR register.*/
			
		LPC_UART0->DLL = 0x4E;             /*Lower bit  baud rate is 14400 ,setting DLL value as 78.*/ 
		LPC_UART0->DLM = 0x00;       			/*higher bit .setting dlm value.*/
		LPC_UART0->FCR = 0x00000007;      /*Enable FIFO ,Clear Rx and Tx in FCR Register.*/
		LPC_UART0->FDR = 0x21;            /*passing divaddval and divmul value.*/
		LPC_UART0->LCR &= ~(1<<7);        /*Disabling DLAB bit locks the DLL and DLM values.*/
		LPC_GPIO1->FIODIR |=(1<<29); 		  /* p1.29 pin Direction*/
		
}
