#include "LPC17xx.h"
void uartTransmit(uint32_t val);
uint32_t uartReceive(void);
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
				val=uartReceive();
				if((val == 'a') || (val == 'b'))
				{
							uartTransmit(val);
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

