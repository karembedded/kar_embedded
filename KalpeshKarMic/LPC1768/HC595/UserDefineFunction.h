#include "system_lpc17xx.h"

#define PIN_OFFSET 0x14
#define PINSELCT0ADDR 0x4002C000
#define PINMODE0ADDR  0x4002C040

enum ePinsel{GPIO=0,ALT_FUNC1,ALT_FUNC2,ALT_FUNC3};
enum eState{LOW=0,HIGH};
enum eDirection{INPUT=0,OUTPUT};
void PinSelFunc(uint8_t ,uint8_t ,enum ePinsel);
void PinWrite(uint8_t,uint8_t,enum eState);
void PinDir(uint8_t,uint8_t ,enum eDirection);
enum pinmode
{
                pull_up = 0,
                repeater =1,
                no_pull_no_down =2,
                on_chip_pull_up =3,
};
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
void PinModeSel(uint8_t  Port_number, uint8_t Pin_number, enum pinmode mode)
{
                uint32_t* PortAddr;
                if(Pin_number<=15)
                {
                                PortAddr = (uint32_t*) (PINMODE0ADDR + Port_number * 8); 
                                *(PortAddr)= *(PortAddr) & ~(3<<Pin_number *2);
                                *(PortAddr)= *(PortAddr) | (mode<<Pin_number *2);
                }
                else
                {
                                Pin_number = Pin_number -16;
                               
                                PortAddr = (uint32_t*) (PINMODE0ADDR + 0x4 + (Port_number * 8));
                                *(PortAddr)= *(PortAddr) & ~(3<<Pin_number *2);
                                *(PortAddr)= *(PortAddr) | (mode<<Pin_number *2);
                }
}