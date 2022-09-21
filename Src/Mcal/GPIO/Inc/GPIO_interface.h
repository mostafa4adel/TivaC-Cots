/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : GPIO_interface.h
 *   Module : GPIO 
 *
 *   Description:  header file for GPIO 
 *
 ***************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/*************************
 * INCLUDES
 ***************************/

 #include "Std_Types.h"
 

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
 

/*************************
 * GLOBAL FUNCTION PROTOTYPES
 *************************/
void GPIO_voidEnablePortAPins(uint8 Copy_uint8Pins);

void GPIO_voidDirPortA(uint8 Copy_uint8Dir);

void GPIO_voidWriteToPortA(uint8 Copy_uint8Pin);

#endif
/*************************
 * END OF FILE
 **************************/
