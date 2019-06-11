#include "lpc17xx.h"
#include "extint.h"
extern uint32_t eint1_counter;
void EINT1_IRQHandler (void) 
{
		  	
		
  LPC_SC->EXTINT = EINT1;		/* clear interrupt */
		
  eint1_counter++;
  if ( eint1_counter & 0x01 )	/* alternate the LED display */
  {
			LPC_GPIO1->FIOSET |= 1<<29;	/* turn ON p1.29 */	
  }
  else
  {
			LPC_GPIO1->FIOCLR |= 1<<29;	/* turn OFF p1.29 */
  }
}
