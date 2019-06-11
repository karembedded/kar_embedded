
#include "lpc17xx.h"
//#include "type.h"
#include "extint.h"
#include "UserDefineFunction.h"

volatile uint32_t eint1_counter;
void delay(void)
{
					uint32_t i,j;
					for(i=0;i<800;i++)
					{
								 for(j=0;j<10000;j++);
													
					}              
}
void EINT3_IRQHandler (void)
{
					//PinSelFunc(2,6,1);
					//LPC_SC->EXTINT |= (1 << 6);
					LPC_GPIOINT->IO2IntClr |= (0X01 << 6);
					PinWrite(1,21,1);              /* turn off P2.0~3 */      
					delay();
					PinWrite(1,21,0);              /* turn off P2.4~7 */
					delay();
					
}              

void EINT2_IRQHandler (void) 
{
				LPC_SC->EXTINT |= 0X03;
																				/* clear interrupt */
				PinWrite(1,29,1);              /* turn off P2.0~3 */      
				delay();
				PinWrite(1,29,0);              /* turn off P2.4~7 */
				delay();
}
void EINT1_IRQHandler (void) 
{
				LPC_SC->EXTINT |= 0x02;                           /* clear interrupt */


				PinWrite(1,24,1);              /* turn off P2.0~3 */      
				delay();
				PinWrite(1,24,0);              /* turn off P2.4~7 */
				delay();
}


uint32_t EINT1Init( void )
{
				PinSelFunc(2,11,1);
				PinDir(1,24,1);
				PinWrite(1,24,0);
				LPC_SC->EXTMODE = 0x01;        /* INT1 edge trigger */
				LPC_SC->EXTPOLAR = 0x01;       /* INT1 is falling edge by default */
				NVIC->ISER[0] |=1<<19;
}

uint32_t EINT2Init( void )
{
				PinSelFunc(2,12,1);
				PinDir(1,29,1);
				PinWrite(1,29,0);
				LPC_SC->EXTMODE = 0x01;         /* INT1 edge trigger */
				LPC_SC->EXTPOLAR = 0x01;        /* INT1 is falling edge by default */
				NVIC->ISER[0] |=1<<20;
}

uint32_t EINT3Init( void )
{
                
				//PinSelFunc(2,6,1);
				PinDir(1,21,1);
				PinWrite(1,21,0);
				LPC_GPIOINT->IO2IntEnR |= (1 << 6);  // setting raising edge when using GPIO pins of port 0 and 2.(p2.6)
				NVIC->ISER[0] |=1<<21;
}

int main (void)
{
        
  EINT1Init();
                EINT2Init();
                EINT3Init();
                

   while( 1 );
}
