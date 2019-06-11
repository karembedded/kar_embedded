#include "Header.h"

int main (void)
{
		SystemInit();
	
		while( 1 )
		{
			EINTInit();
			if(flag==1)
			{
				intternal_led_event();	
			}
		  else if(flag==2)
			{
				external_led_event();
			}
			else if(flag==12)
			{
				intternal_led_event();
				long_delay();
				external_led_event();
			}
			else if(flag==21)
			{
				external_led_event();
				long_delay();
				intternal_led_event();
			}
			else
			{
			}
			
		}
}
uint32_t EINTInit( void )
{
						LPC_PINCON->PINSEL4 |= 01<<22;	/* set P2.11 as EINT1 and*/
						LPC_PINCON->PINSEL4 |= 01<<24;	/* set p2.12 as EINT2 */
					
	
						LPC_GPIO1->FIODIR |= 1<<29;	/* port 1, bit 29 only */
						LPC_GPIO1->FIODIR |= 1<<24;	/* port 1, bit 24 only */
						
	
						LPC_GPIO1->FIOCLR |= 1<<29;	/* turn off LED */
						LPC_GPIO1->FIOCLR |= 1<<24;	/* turn off LED */
						

						LPC_SC->EXTMODE |= EINT1_EDGE;		/* INT1 edge trigger */
						LPC_SC->EXTMODE |= EINT2_EDGE;
             
						NVIC_EnableIRQ(EINT1_IRQn);					/* Interrupt Enabled*/
						NVIC_EnableIRQ(EINT2_IRQn);
	
	/*					NVIC_SetPriorityGrouping(0);			Budefault grouping is 0 */
	
						NVIC_SetPriority(EINT1_IRQn, 3);		/* Internal LED Less Priority p1.29*/
						NVIC_SetPriority(EINT2_IRQn, 2);		/* External LED HIGH Priority p1.24*/
					
	
}

void EINT1_IRQHandler (void) 		//pri 1
{				
			LPC_SC->EXTINT |= EINT1;
			if(flag==0)
			{				
				flag=1;
			}
			else if(flag==2)
			{
				flag = 21;
			}
}
void EINT2_IRQHandler (void) //pri 2
{	
			LPC_SC->EXTINT |= EINT2;
			if(flag==0)
			{
				flag=2;
			}
			else if(flag==1)
			{
				flag=12;
			}
}

void delay(void)
{
				uint32_t i,j;
				for(i=0;i<800;i++)
				{
				for(j=0;j<100;j++);
				}

}
void long_delay(void)
{
				uint32_t i,j;
				for(i=0;i<80000;i++)
				{
				for(j=0;j<100;j++);
				}

}

void intternal_led_event(void)			//
{
			LPC_SC->EXTINT |= EINT1;
			INTERNAL_LED_ON;	/* turn ON p1.29 */
			delay();
			INTERNAL_LED_OFF;	/* turn OFF p1.29 */		
			delay();
			flag=0; 
	
}
void external_led_event(void)
{
				LPC_SC->EXTINT |= EINT2;
				EXTERNAL_LED_ON;	/* turn ON p1.24 */		
				delay();
				EXTERNAL_LED_OFF ;	/* turn OFF p1.24 */
				delay();
				flag=0;
	
}
