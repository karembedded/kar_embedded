#include "lpc17xx.h"
#include "system_LPC17xx.h"
void adc(void);
uint32_t res=0;
uint32_t res1=0;
int main()
{
               // SystemClockUpdate();
                adc();   
}
void adc(void)
{
                LPC_SC->PCONP =LPC_SC->PCONP | (1<<12);               //Enaable the power for A/D                                
                LPC_PINCON->PINSEL1 =LPC_PINCON->PINSEL1 |(1<<14);    //Pinsel for ADC p0.23
                LPC_PINCON->PINSEL1 =LPC_PINCON->PINSEL1 |(1<<16);    //Pinsel for ADC p0.24
                
                LPC_PINCON->PINMODE1 =LPC_PINCON->PINMODE1 | 1<<15;   //Pinmode for ADC 
                LPC_PINCON->PINMODE1 =LPC_PINCON->PINMODE1 | 1<<17;

                LPC_ADC->ADCR =LPC_ADC->ADCR | (2<<8);                    // Set the clock ADC  
                LPC_ADC->ADCR =LPC_ADC->ADCR | (1<<21);                                    // Enable ADC Mode

                LPC_ADC->ADCR = LPC_ADC->ADCR | 0x03;                          // Channel celection 0 and 1
                while(1)
                                {
                                                LPC_ADC->ADCR =LPC_ADC->ADCR | 1<<16;      //Brust coversation AD0CR 16 bit Start

                                                while(((LPC_ADC->ADGDR>>31) & 0X01)==0  && (((LPC_ADC->ADGDR>>31) & 0X01)==0));
                                                res=(LPC_ADC->ADGDR >> 4) & 0xFFF;
                                                res1=(LPC_ADC->ADGDR >> 4) & 0xFFF;
                                }              
}
