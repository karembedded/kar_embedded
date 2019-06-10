#include "LPC17xx.h"
void initialization(void);
int main()
{                                                                         
					SystemInit();
					uint32_t val;
					initialization();
					while(1)
					{
							 
							while(((LPC_UART0->LSR)&0x01)==0x01) 
							{
								LPC_UART0->ACR =0x01;
								val= LPC_UART0->RBR;

									if(((LPC_UART0->LSR)&0x20)==0x20)   
											LPC_UART0->THR=val; 
									if(val == 'a')
									{
											LPC_GPIO1->FIOSET3 =LPC_GPIO1->FIOSET3  | (1<<5);
										
							
									}
									if(val == 'b')
									{
											LPC_GPIO1->FIOCLR3 =LPC_GPIO1->FIOCLR3  | (1<<5);
									}
							}
					}
}
