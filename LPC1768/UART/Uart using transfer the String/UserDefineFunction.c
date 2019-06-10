
#include "UserDefineFunction.h"

void PinSelFunc(uint8_t port_number,uint8_t pin_number,enum ePinsel mode)
{
				uint32_t *port_addr;

				if(pin_number <= 15)
				{
							port_addr= (uint32_t*)(LPC_PINCON_BASE + (8*port_number));
							*(port_addr)=((*port_addr)& ~(3 << pin_number*2));
							*(port_addr)=((*port_addr)| (mode << pin_number*2));
				}
				else
				{
							port_addr= (uint32_t*)(LPC_PINCON_BASE +0x04+ (8*port_number));
							*(port_addr)=((*port_addr)& ~(3 << (pin_number-16)*2));
							*(port_addr)=((*port_addr)| (mode << (pin_number-16)*2));
				}
}


void PinWrite(uint8_t port_number,uint8_t pin_number,enum eState pin_state)
{
			uint32_t *port_addr;
			if(pin_state !=0)
			{
					port_addr=(uint32_t*)(LPC_GPIO_BASE + 0x14 + (0x20 * port_number));
					*port_addr=(*port_addr) | 0x01<<pin_number;
			}
			else
			{
					port_addr=(uint32_t*)(LPC_GPIO_BASE + 0x14 + (0x20 * port_number));
					*port_addr=(*port_addr) & ~(0x01<<pin_number);
			}
}


void PinDir(uint8_t port_number,uint8_t pin_number,enum eDirection pin_direction)
{
			uint32_t* port_addr;
			port_addr=(uint32_t*)(LPC_GPIO_BASE + (0x20 *port_number ));
			if(pin_direction)
			{
					*port_addr=((*port_addr) | 0x01 << pin_number );
			}
			else
			{
					*port_addr=((*port_addr) | ~(0x01 << pin_number ));
			}
}
