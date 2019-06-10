
#include "UserDefineFunction.h"
int main()
{
	uint32_t i;	
	char a[] ="Kalpesh Mali.";
	
	UART0_initialization();
	
	
	
	while(1)
	{
		while((LPC_UART0->LSR & 0x20) == 0x20)   /* Polling */
		{
			
			for(i=0;i<=a[i];i++)
			{
				
				LPC_UART0->THR=a[i];
			}
			
		}
		
		
		
	}
}
