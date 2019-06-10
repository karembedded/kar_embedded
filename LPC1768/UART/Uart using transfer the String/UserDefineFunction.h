#include "LPC17xx.h"
#include "system_LPC17xx.h"


enum ePinsel{GPIO=0,ALT_FUNC1,ALT_FUNC2,ALT_FUNC3};
enum eState{LOW=0,HIGH};
enum eDirection{INPUT=0,OUTPUT};
void PinSelFunc(uint8_t ,uint8_t ,enum ePinsel);
void PinWrite(uint8_t,uint8_t,enum eState);
void PinDir(uint8_t,uint8_t ,enum eDirection);
void UART0_initialization(void);
