/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : MCU_Interface.h
 *   Module : MCU 
 *
 *   Description:  header file for MCU clock control
 *
 ***************************/
#ifndef MCU_Iterface_H
#define MCU_Iterface_H

/*************************
 * INCLUDES
 ***************************/

 #include "Std_Types.h"
 #include "MCU_Types.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
 

/*************************
 * GLOBAL FUNCTION PROTOTYPES
 *************************/
 
 void MCU_voidInitClock(void);

 void MCU_voidEnableGPIO(uint8 GP);
#endif
/*************************
 * END OF FILE
 **************************/
