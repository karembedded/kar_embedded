#include "LPC17xx.h"
#include "system_LPC17xx.h"
#include "UserDefineFunction.h"
void blinkLed(void);
int main()
{
	uint32_t i,j;
	LPC_SC->PCONP |= 1<<8;			/* The SPI interface power/clock control bit.*/
	LPC_SC->PCLKSEL0 &= ~(3<<16);  /* 72/4=18 0 is 18Mhz  */
	
	
//	PinSelFunc(0,15,2);					 /*  Serial Clock Pin	*/
//	PinSelFunc(0,16,3);          /* Slave Select Enable SSEL0 Pin  */
//	PinSelFunc(0,17,3);					/* MISO (Master In Slave Out Pin) */
//	PinSelFunc(0,18,3);					/* MOSI (Master Out Slave In Pin )*/
	
	              LPC_PINCON->PINSEL0 |= 0XC0000000;
                 LPC_PINCON->PINSEL1 |= 3;
                LPC_PINCON->PINSEL1 |= (3<<4);

	
	
	LPC_SPI->SPCCR |=8;

	LPC_SPI->SPCR |=(3 << 5); 	//spi in master mode
	//LPC_SPI->SPCR |=(1 << 6);		//lsb is transfered first
	
	//PinDir(1,29,0);
	LPC_GPIO1->FIODIR |= (1<<29);
	LPC_SPI->SPDR |= 0xA0;
while(1)
{
	//	for(j=1;j<=256;j++)
	//	{
      
				while (!((LPC_SPI->SPSR >> 7) & 1));					/* Check the Status and data shifted to right */
				LPC_GPIO1->FIOSET |= (1<<29);									/* Latch Pin*/
				i=3;
				   while(i--);						
				LPC_SPI->SPDR |= 0xAA; 												/* Data is Passed in SPDR*/
						LPC_GPIO1->FIOCLR  |= (1<<29);

}   
}
void blinkLed(void)
{
			uint32_t i,j=0;
			for(i=1;i<=1000;i++)
			{
					for(j=0;j<1000;j++);
			}
}
