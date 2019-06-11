#include "lpc17xx.h"
#include "system_LPC17xx.h"
uint32_t i,j,time;
int main()
{
 uint32_t k=100;
	LPC_SC->PCONP   |=  1<<1;   /* (Bit 1 )-PCTIM0 (Timer/Counter = 0) power/clock control bit. */       
	
	LPC_SC->PCLKSEL0|=  ~(3<<2);  /* (Bit 3:2) PCLK_TIMER0 -Peripheral clock selection for TIMER0.*/
	
	LPC_TIM0->PR    |=   0x01; /*Prescale Register. When the Prescale Counter (below) is equal to this value,
																	the next clock increments the TC and clears the PC.*/
	
	LPC_TIM0->CTCR  |=  ~(3<<0); /*Count Control Register: TC is incremented [(BIT 0,1) :00 Timer Mode, 01: Counter Mode- rising edges
																10: Counter Mode -falling edges ,11 on both edges] */
																																	
	LPC_TIM0->TCR   |=  (1<<0);     /*Timer Control Register : Bit 0 - Counter Enable,Bit 1 - Counter Reset*/
	
	while(k--);
	i = LPC_TIM0->TC;
	k=1000;
	while(k--);                  //We cheack the execuation tiome
	SystemInit();
	j = LPC_TIM0->TC;
	time = ((j-i)*0.05);				//formula for time

}
