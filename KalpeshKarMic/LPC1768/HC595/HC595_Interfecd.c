//  write a program Function to interface with HC595 serial to parallel IC.
#include "lpc17xx.h"
#include "UserDefineFunction.h"

void delay(void);
void delay1(void);
int main (void)
{   
                 
		 // SystemClockUpdate();
			//LPC_PINCON->PINSEL3 = LPC_PINCON->PINSEL3 & ~(3<<26);               // selecting the GPIO1.select the pin 29 for LED.      
			//LPC_GPIO1->FIODIR = LPC_GPIO1->FIODIR | (1<<29);                   //giving the direction 1 means is output for led pin
		 
																											
			 PinSelFunc(1,21,0);   //selecting the pin p1.21 and direction as output(SER data pin)
			 PinDir(1,21,1);
																									 
			 PinSelFunc(1,22,0);   //selecting the pin p1.22 and direction as output(SRCLK pin)
			 PinDir(1,22,1);
																									 
			 PinSelFunc(1,23,0);  //selecting the pin p1.23 and direction as output(RCLK pin)
			 PinDir(1,23,1);           
			 while(1);
                                               
}
void SerialWrite(uint8_t data)
{
       uint8_t val,i;
       for(i=0;i<8;i++)
       {
             val=data & 0x01;                                                                                                                                                                                               
             data=data>>1;                                                                                                                                                  
                                                                
             if(val)
             {
                   PinWrite(1,21,HIGH);
             }
             else
             {
                   PinWrite(1,21,LOW);
             }
                                               
             PinWrite(1,22,HIGH);                                                                                                     //srclk pulse
             delay();
             PinWrite(1,22,LOW);
             delay();
        }
        PinWrite(1,23,HIGH);                                                                                                     //rclk pulse
        delay();
        PinWrite(1,23,LOW);
        delay();
}
 

void delay(void)       //1 Khz Frequency Generation            			                                                                                                                                                                                                                                                                                                           //for 1khz.
{
				uint32_t i;
							
				i=8928;
				while(i--);
}
 

void delay1(void)
{
				uint32_t i,j;
				for(i=0;i<800;i++)
				{
							for(j=0;j<10000;j++);
				}
}
