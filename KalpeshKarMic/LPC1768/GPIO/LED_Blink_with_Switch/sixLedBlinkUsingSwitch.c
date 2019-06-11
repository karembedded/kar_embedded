//#include "type.h"
#include "lpc17xx.h"
void delay(void);
int main (void)
{                                              
	uint32_t i, j;

	SystemClockUpdate();


	LPC_PINCON->PINSEL3 = LPC_PINCON->PINSEL3 & ~(3<<16);    //Selecting the GPIO1. select the p1.24 pin for switch.
	LPC_PINCON->PINSEL3 = LPC_PINCON->PINSEL3 & ~(3<<26);                    // selecting the GPIO1.select the pin 29 for LED.
	LPC_GPIO1->FIODIR = LPC_GPIO1->FIODIR | (1<<29);  //giving the direction 1 means is output for led pin
	LPC_GPIO1->FIODIR = LPC_GPIO1->FIODIR | 0x07E00000;
	//LPC_GPIO1->FIODIR = LPC_GPIO1->FIODIR & ~(1<<24);          //giving the direction 0 means is input for switch pin
	while(1)
	{
		if(LPC_GPIO1->FIOPIN >> 27 & 1 )//checking the pin 24 is high 1
		{
			for(i=21;i<=26;i++)
			{
				LPC_GPIO1->FIOSET =LPC_GPIO1->FIOSET | (1<<i);
				delay();
				LPC_GPIO1->FIOCLR =LPC_GPIO1->FIOCLR | (1<<i);//LED is ON
				delay();
			}
		}
		else
		{
				for(i=26;i>=21;i--)
				{

						LPC_GPIO1->FIOSET =LPC_GPIO1->FIOSET | (1<<i);
						delay();
						LPC_GPIO1->FIOCLR =LPC_GPIO1->FIOCLR | (1<<i);
						delay();
				}
		}
	}
}
void delay(void)
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<10000;j++);
	}

}
