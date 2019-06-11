#include "LPC17xx.h"
#include "UserDefineFunction.h"
void Timer_Initialization(void);
uint32_t pulse_interval=18000,pulse_width=10; /* 1 milisecond  */
uint16_t count=0;
int main()
{
			Timer_Initialization();

			LPC_TIM0->MR0 =((pulse_width * pulse_interval)/100);					/* */
			LPC_TIM0->TCR |=(1<<0);					/*Start Timer   */
			NVIC_EnableIRQ(TIMER0_IRQn);
			while(1);
	
}
void Timer_Initialization(void)
{
			LPC_SC->PCONP |= 1<<1;

			LPC_SC->PCLKSEL0 &=~(3<<2);	/* Peripheral Clock Selection*/
			PinSelFunc(1,28,3);					/*PinDir selection Of Mat0.0 */
			LPC_TIM0->CTCR |=0<<0;
			LPC_TIM0->PR =0;				/* 1 tic is 0.1 Milli sec */

			LPC_TIM0->MCR =(1<<0)|(1<<1);	/* Interrupt selection [Bit 0],Reset the MR0*/
			LPC_TIM0->EMR |=(3<<4);   /*Toggle the corresponding External Match bit/output.*/

}
void TIMER0_IRQHandler(void)
{
			LPC_TIM0->IR |=(1<<0);
			if(PinRead(1,28) ==0)
			{
				LPC_TIM0->MR0 = ((100- pulse_width)*pulse_interval/100);
			}
			else
			{
				LPC_TIM0->MR0 = (pulse_width*pulse_interval/100);
			}
}
