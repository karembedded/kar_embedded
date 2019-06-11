#include "lpc17xx.h"
#include "system_LPC17xx.h"
#include "extint.h"
#define INTERNAL_LED_ON LPC_GPIO1->FIOSET |= 1<<29
#define INTERNAL_LED_OFF LPC_GPIO1->FIOCLR |= 1<<29
#define EXTERNAL_LED_ON LPC_GPIO1->FIOSET |= 1<<24
#define EXTERNAL_LED_OFF LPC_GPIO1->FIOCLR |= 1<<24
void EINT1_IRQHandler (void);
uint32_t EINTInit( void );
static uint32_t eint1_counter; 
void delay(void);
void long_delay(void);
void external_led_event(void);
void intternal_led_event(void);
void external_led1_event(void);
 uint32_t flag=0;
