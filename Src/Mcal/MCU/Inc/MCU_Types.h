/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : MCU_Types.h
 *   Module : MCU
 *
 *   Description:  
 *
 ***************************/
#ifndef MCU_TYPES_H
#define MCU_TYPES_H

/*************************
 * INCLUDES
 ***************************/

#include "Std_Types.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
 #define ENB_MOSC            0
 #define DIS_MOSC            1

 #define OSC_SRC_MOSC        0
 #define OSC_SRC_PIOSC       1
 #define OSC_SRC_PISOC_4     2
 #define OSC_SRC_LFIOSC      3


 #define XTAL_4M                  0x06
 #define XTAL_4_09M               0x07
 #define XTAL_4_91M               0x08
 #define XTAL_5M                  0x09
 #define XTAL_5_12M               0x0A
 #define XTAL_6M                  0x0B
 #define XTAL_6_14M               0x0C
 #define XTAL_7_37M               0x0D
 #define XTAL_8M                  0x0E
 #define XTAL_8_19M               0x0F
 #define XTAL_10M                 0x10
 #define XTAL_12M                 0x11
 #define XTAL_12_28M              0x12
 #define XTAL_13_56M              0x13
 #define XTAL_14_31M              0x14
 #define XTAL_16M                 0x15
 #define XTAL_16_38M              0x16
 #define XTAL_18M                 0x17
 #define XTAL_20M                 0x18
 #define XTAL_24M                 0x19
 #define XTAL_25M                 0x1A


 #define ENB_PLL_BYPASS       0

 #define PLL_PWD_DOWN         1
 
 #define PWM_DIV_2            0
 #define PWM_DIV_4            1
 #define PWM_DIV_8            2
 #define PWM_DIV_16           3
 #define PWM_DIV_32           4
 #define PWM_DIV_64           5

 #define ENB_PWM_CLK_DIV      1
 
 #define ENB_SYS_CLK_DIV      1
 




/*************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *************************/

 
#endif
/*************************
 * END OF FILE
 **************************/
