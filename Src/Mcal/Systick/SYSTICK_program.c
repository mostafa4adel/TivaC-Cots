 /*************************
 * FILE DESCRIPTION
 **************************/

 /**  \file    Systickprogram.c
 *   \breif   
 * 
 * 
 *   \details 
 * 
 **************************/

 /*************************
 * INCLUDES
 ***************************/
 #include "SYSTICK_interface.h"
 
 #include "Std_Types.h"
 #include "Mcu_Hw.h"
 

 /*************************
 * LOCAL DATA
 ***************************/

 /*************************
 * GLOABAL DATA
 ***************************/

 /*************************
 * LOCAL FUNCTION PROTOTYPES
 ***************************/

 /*************************
 * LOCAL FUNCTIONS
 ***************************/
 void (*CallBack)(void) = (void *) 0;
 /*************************
 * GLOBAL FUNCTIONS
 **************************/

void SYSCK_voidInit()
{
 CORTEXM4_STCTRL = 7; // enable counter, interrupt and select system bus clock
 CORTEXM4_STCURRENT = 0;
}


void SYSCK_uint32LoadValueInSec(uint32 time)
{
 uint32 value = 16000000 - time;
 CORTEXM4_STRELOAD = 0x00FFFFFF & value;
}

void SYSCK_voidSetHandl(void (*ptr)(void))
{
 CallBack = ptr;
}

void SysTick_Handler()
{
 CallBack();
}
 

  /*************************
 * END OF FILE
 **************************/

 