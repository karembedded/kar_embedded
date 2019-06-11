#include "lpc17xx.h"
#include "system_LPC17xx.h"
#include "UserDefineFunction.h"
void TimerInitialization(void);
uint32_t A=0,B=0,HIGH_COUNT=0,LOW_COUNT=0,PW=0;
int main()
{
					TimerInitialization();
					LPC_TIM0->TCR|=0x01;
					while(1)
					{
									PW=((HIGH_COUNT/(HIGH_COUNT+LOW_COUNT))*100);
					}

}
void TimerInitialization(void)
{
				LPC_SC->PCONP |=1<<1;                  //Power up TIM0

				LPC_TIM0->PR |=0;
				LPC_PINCON->PINSEL3 |= (3<<20); //CAP0.0

				LPC_TIM0->CTCR |= 0x0;         //TIMER MODE        
				LPC_TIM0->CCR |=(1<<0) |(1<<1) |(1<<2);         //RISING EDGE,FALLING EDGE,INTERRUPT                        
				NVIC_EnableIRQ(TIMER0_IRQn);
}
void TIMER0_IRQHandler(void)
{
				LPC_TIM0->IR |=1<<4;     //CR0 Interrupt flag for capture channel 0 event.
				if(PinRead(1,26) == 0)
				{
												PinWrite(1,29,HIGH);
												B=LPC_TIM0->CR0;
												LOW_COUNT=LPC_TIM0->CR0-A;            
				}
				else
				{
												PinWrite(1,29,LOW);
												A=LPC_TIM0->CR0;
												HIGH_COUNT=LPC_TIM0->CR0-B;
				}
}
