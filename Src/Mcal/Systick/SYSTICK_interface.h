/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : SYSTICK_interface.h
 *   Module : SYSTICK
 *
 *   Description:  header file for SYSTICK
 *
 ***************************/
#ifndef SYSTICK_INTERFACE_H
#define SYSTICK_INTERFACE_H

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

void SYSCK_voidInit();

void SYSCK_uint32LoadValueInSec(uint32 time);

void SYSCK_voidSetHandl(void (*ptr)(void));

#endif
/*************************
 * END OF FILE
 **************************/
