#include "lpc17xx.h"
#include "system_LPC17xx.h"
#include "extint.h"
uint32_t EINTInit( void )
{
  LPC_PINCON->PINSEL4 = 01<<22;	/* set P2.11 as EINT0 and*/
								
	
  LPC_GPIO1->FIODIR = 1<<29;	/* port 1, bit 29 only */
 LPC_GPIO1->FIOCLR = 1<<29;	/* turn off LED */

																	/*LPC_GPIOINT->IO2IntEnF = 0x300;	 Port2.11 is falling edge. */
  LPC_SC->EXTMODE = EINT1_EDGE;		/* INT1 edge trigger */
  LPC_SC->EXTPOLAR = 1;				/* INT1 is falling edge by default */

  NVIC_EnableIRQ(EINT1_IRQn);
  return( 1 );
}
