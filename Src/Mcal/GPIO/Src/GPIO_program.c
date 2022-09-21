/*************************
 * FILE DESCRIPTION
 * **************************/
/**  \file     GPIO_program.c
 *   \breif    module to configure the gpio 
 *   \details
 * 
 *-**************************/
/*************************
 * INCLUDES
 * **************************/

#include "GPIO_interface.h"

#include "Std_Types.h"
#include "Mcu_Hw.h"


#define Get_Bit_Band_Addr(Reg,Bit) *((volatile uint32 *) (0x42000000+(( (uint32)&Reg - 0x40000000)* 32) +(Bit * 4)))


/*************************
* GLOBAL FUNCTIONS
***************************/

void GPIO_voidEnablePortAPins(uint8 Copy_uint8Pins)
{
  GPIO_PA_APB_DEN = Copy_uint8Pins;
}

void GPIO_voidDirPortA(uint8 Copy_uint8Dir)
{
  GPIO_PA_APB_DIR = Copy_uint8Dir;
}

void GPIO_voidWriteToPortA(uint8 Copy_uint8Data)
{
  GPIO_PA_APB_DATA = Copy_uint8Data;
}

  /*************************
 * END OF FILE
 ***************************/

