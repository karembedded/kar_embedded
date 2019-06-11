#include "system_LPC17xx.h"
#include "extint.h"
#include "lpc17xx.h"
uint32_t eint1_counter;
int main (void)
{
  
SystemInit();			
         
  EINTInit();     /* initialize GPIO pins as external interrupts */ 
  while( 1 );
}

