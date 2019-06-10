#include "LPC17xx.h"
#include "system_LPC17xx.h"
#include "UserDefineFunction.h"
void UART0_initialization(void)
{
	
	
		LPC_SC->PCONP= 0x00000008;					/* UART0 power/clock control bit.   */
	
		LPC_SC->PCLKSEL0 &=~(3<<6);				/*7:6 PCLK_UART0 Peripheral clock selection for UART0. reset value 00*/

		LPC_PINCON->PINSEL0 = 0x00000050;		/* p0.2 is Tx and p0.3 is Rx*/
		
		LPC_UART0->LCR |= 0x80;				/*.Enable access to Divisor Latches.*/

		LPC_UART0->DLL = 117;			/* 14400 baud rate calculation Lower Bit  */
		LPC_UART0->DLM = 0x00;			/* Higher Bit are 0*/
	
		LPC_UART0->FDR =0x10;						/* DivAddValue  [0 - 3 bit] value we get 1 and MulValue [4-7] value we get 2*/
		LPC_UART0->LCR = 0x03;				/* Word Length Select: Now We selecting 8 bit*/
		LPC_UART0->FCR = 0x07;				/* 0 bit FIFO enable,1 bit Rx fifo enable,2 bit Tx Fifo Enable*/
}
