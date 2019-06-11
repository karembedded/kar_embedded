/*--------------------------Header Declaration-------------------------------------------------*/
#include "lpc17xx.h"
#include "system_LPC17xx.h"
#include "UserDefineFunction.h"
#include "extint.h"
#define FIVE_HUNDREAD_MILLI 0x7A120
static uint16_t count=0;
/*--------------------------Function Prototype-------------------------------------------------*/ 
void Timer0Initialization(void);
void PinDirection(void);
void PinFunction(void);
void LedEvent(void);
void delay(void);
uint16_t match=0;
/*--------------------------Main Program Start-------------------------------------------------*/
int main()
{
		PinDirection();								/*Pin selection  */
		PinFunction();	
									/* Pin Functionality */
		EINTInit();
		Timer0Initialization();				/*Timer0 Initialization Function*/
	while(1);
}
/*--------------------------Timer Intialization------------------------------------------------*/
void Timer0Initialization(void)
{
	LPC_SC->PCONP   |=  1<<1;   /* (Bit 1 )-PCTIM0 (Timer/Counter = 0) power/clock control bit. */       
	
	LPC_SC->PCLKSEL0|=  ~(3<<2);  /* (Bit 3:2) PCLK_TIMER0 -Peripheral clock selection for TIMER0.*/
	
	LPC_TIM0->PR    |=   0x11; /*Prescale Register. When the Prescale Counter (below) is equal to this value,
															the next clock increments the TC and clears the PC.*/

}
/*-------------------------Interrupt Handler----------------------------------------------------*/
void EINT1_IRQHandler(void)
{
	LPC_SC->EXTINT |= EINT1;
	NVIC_EnableIRQ(TIMER0_IRQn);
	LPC_TIM0->TCR |= 1 << 0; 
}
void TIMER0_IRQHandler(void)
{
	LPC_TIM0->IR |=1<<0;
	LedEvent();
}
/*-----------------------External Interrupt Initialization--------------------------------------*/

uint32_t EINTInit( void )
{
 
  LPC_SC->EXTMODE |= EINT1_EDGE;		/* INT1 edge trigger */
  LPC_SC->EXTPOLAR = 1;				/* INT1 is falling edge by default */

  NVIC_EnableIRQ(EINT1_IRQn);
	 
}


/*-----------------------Pin Functionality select-------------------------------------------------*/

void PinDirection(void)
{
	PinSelFunc(1,28,3);				/*MAT0.0 match Register 0 P1.28*/
	PinDir(1,28,1);							/*Direction of pin p1.28 is high*/
	PinWrite(1,28,0);						/* Clear the pin p1.28 */
	
	
	PinSelFunc(1,29,0);     /* LED Light only*/ 
	PinDir(1,29,1);
	PinWrite(1,29,0);
	PinSelFunc(2,11,1);
	
}

void PinFunction(void)
{
	LPC_TIM0->CTCR  |=  ~(3<<0); /*Count Control Register: TC is incremented [(BIT 0,1) :00 Timer Mode, 01: Counter Mode- rising edges
																10: Counter Mode -falling edges ,11 on both edges] */
	
	LPC_TIM0->MR0 = FIVE_HUNDREAD_MILLI;    /*The Match register values are continuously compared to the Timer Counter value. When
															the two values are equal, actions can be triggered automatically.
															 Load MR */		
	
	LPC_TIM0->MCR |= (3<<0);   /* Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC.
																This interrupt is disabled [Bit 0 = Value 1]  :*/
	LPC_TIM0->IR |=  (1<<0);											
	//LPC_TIM0->TCR |= (1<<0);   /* [Bit :0 ]Counter Enable -When one, the Timer Counter and Prescale Counter 
	//																are enabled for counting. When zero,the counters are disabled.*/
}
void LedEvent(void)
{ 
	match++;
	if(match>10)
	{
		match=0;
		PinWrite(1,29,0);
		LPC_TIM0->TCR &= ~(1<<0); 
		 NVIC_DisableIRQ(TIMER0_IRQn);			/* Led Is Blink 5 time's and Timer Interrupt is Disabled*/
	}
	 else if(count == 0)
	{
		PinWrite(1,29,1);
		count=1;
	}
	else
	{
		PinWrite(1,29,0);
		count=0;
	}
}


