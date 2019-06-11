#include "lpc17xx.h"
#include "system_LPC17xx.h"
void delay(void);
void watch_dog_init(void);
int main (void)
{              
			SystemClockUpdate();
			//SystemInit();
			watch_dog_init();                      
			LPC_GPIO1->FIODIR = LPC_GPIO1->FIODIR | (1<<29);   
			LPC_GPIO1->FIOSET =LPC_GPIO1->FIOSET  | 1<<29;
			delay();
			LPC_GPIO1->FIOCLR =LPC_GPIO1->FIOCLR | 1<< 29;
			delay();
			while(1);                                                              
}
void watch_dog_init(void)
{
		LPC_WDT->WDMOD = (0x3);  
		LPC_WDT->WDTC = (0xDBBA0)/4;     // once WDEN is set, the WDT will start after feeding
		LPC_WDT->WDCLKSEL = 0x1;
		LPC_WDT->WDFEED = 0xAA;                           /* Feeding sequence */
		LPC_WDT->WDFEED = 0x55;             
}
void delay(void)  //clock generation 
{
		uint32_t i=8928;
		while(i--);
}
