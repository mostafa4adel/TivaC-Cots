/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : IntCtrl_Types.h
 *   Module : IntCtrl
 *
 *   Description:  header file for interrupt control
 *
 ***************************/
#ifndef IntCtrl_TYPES_H
#define IntCtrl_TYPES_H

/*************************
 * INCLUDES
 ***************************/

#include "Std_Types.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
#define GROUPPRIO_3BITS 4
#define GROUPPRIO_2BITS 5
#define GROUPPRIO_1BITS 6
#define GROUPPRIO_0BITS 7




/*************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *************************/
typedef enum
{
 GPIO_PORTA,
 GPIO_PORTB,
 GPIO_PORTC,
 GPIO_PORTD,
 GPIO_PORTE,
 UART0,
 UART1,
 SSI0,
 I2C0,
 PWM0FAULT,
 PWM0GENERATOR0,
 PWM0GENERATOR1,
 PWM0GENERATOR2,
 QEI0,
 ADC0SEQUENCE0,
 ADC0SEQUENCE1,
 ADC0SEQUENCE2,
 ADC0SEQUENCE3,
 WATCHDOGTIMER,
 TIMER0A_16_32,
 TIMER0B_16_32,
 TIMER1A_16_32,
 TIMER1B_16_32,
 TIMER2A_16_32,
 TIMER2B_16_32,
 ANALOGCOMPARATOR0,
 ANALOGCOMPARATOR1,
 

 
 SYSTEMCONTROL = 28,
 FLASH_EEPROM,
 GPIO_PORTF,
 

 
 UART2=33,
 SSI1,
 TIMER3A,
 TIMER3B,
 I2C1,
 QEI1,
 CAN0,
 CAN1,


 HIBERNATIONMOD=43,
 USB,
 PWM0GENERATOR3,
 MICRODMASOFT,
 MICRODMAERR,
 ADC1SEQ0,
 ADC1SEQ1,
 ADC1SEQ2,
 ADC1SEQ3,
 

 SSI2 = 57,
 SSI3,
 UART3,
 UART4,
 UART5,
 UART6,
 UART7,



 I2C2 = 68,
 I2C3,
 TIMER4A_16_32,
 TIMER4B_16_32,

 

 TIMER5A_16_32 = 92,
 TIMER5B_16_32,
 TIMER0A_32_64,
 TIMER0B_32_64,
 TIMER1A_32_64,
 TIMER1B_32_64,
 TIMER2A_32_64,
 TIMER2B_32_64,
 TIMER3A_32_64,
 TIMER3B_32_64,
 TIMER4A_32_64,
 TIMER4B_32_64,
 TIMER5A_32_64,
 TIMER5B_32_64,
 SYSTEMEXCEPTION,

 

 PWM1GENERATOR0=134,
 PWM1GENERATOR1,
 PWM1GENERATOR2,
 PWM1GENERATOR3,
 PWM1FAULT,
} IntCtrl_InterruptNumber;

// get the values from the vector table

typedef struct {

}SYSINT_t; 
 
#endif
/*************************
 * END OF FILE
 **************************/
