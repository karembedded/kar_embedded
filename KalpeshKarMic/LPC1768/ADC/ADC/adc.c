//Program for adc through lpc1768
//Connect potentiometer pins one to Vcc, other to GND, and control pin of potentiometer to analog channel you select.


#include "system_lpc17xx.h"
#include "lpc17xx.h"
#include "UserDefineFunction.h"
#include "adc.h"

void SerialWrite(uint8_t);
void delay(void);
uint32_t res;
int main (void)
{   
//SystemClockUpdate();
SystemInit();



//LPC_ADC->CR = (LPC_ADC->CR & ~(1<<21));                  //ensuringg the pdn bit is cleared
//LPC_SC->PCONP &= ~(1<<12);                                                                                                                              //clearing the adc bit->12th.

LPC_SC->PCONP |= 1<<12;        
LPC_ADC->ADCR= 0x00000200;                                                                                                                       //selecting the CLKDIV value.            //seting the adc bit->12th.
LPC_ADC->ADCR |= (1<<21);                            //powering on adc by seting the pdn bit->21st.




//LPC_SC->PCLKSEL0 |= 0x3<<24;                            //setting pclk as cclk.



PinSelFunc(0,24,1);
PinModeSel(0,24,2);


LPC_ADC->ADCR&= ~(1<<16);      //burst mode is off
LPC_ADC->ADCR &= ~(7<<24);      //000 no start
LPC_ADC->ADCR |= 1<<1;                 //select channel 1 for adc





while(1)              
{
//                            res = LPC_ADC->GDR;
//                                            LPC_ADC->CR &= ~(1<<24);                        //start pulse                      
LPC_ADC->ADCR |= 1<<24;                               //start pulse                                                                                                                                                                                      
	while ((LPC_ADC->ADGDR) & (0x80000000)==0);    //wait
	res = LPC_ADC->ADGDR;
res = res & 0x0FFF0;
res = res >> 4;


}
}
 
