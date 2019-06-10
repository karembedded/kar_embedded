#include "LPC17xx.h"
#define LED_ON LPC_GPIO1->FIOSET3 |=  (1<<5);
#define LED_OFF LPC_GPIO1->FIOCLR3 |=  (1<<5);
void initialization(void);
int main()
{                                                                         
		SystemInit();							
		uint32_t val;
		initialization();							/* UART Initialization   */
		while(1)
		{
				while(((LPC_UART0->LSR)&0x01)==0x01) 				/* The UARTn receiver FIFO is not empty. */
				{
						val= LPC_UART0->RBR;										/* Store the Recever Buffer value in a variable*/

						if(((LPC_UART0->LSR)&0x20)==0x20)   		/* Check the UnTHR is empty or not.*/
						LPC_UART0->THR=val; 
						if(val == 'a')
						{
											LED_ON												/* LED is On  */						
						}
						if(val == 'b')
						{
											LED_OFF       								/* Led is Off */
						}
				}
		}
}
