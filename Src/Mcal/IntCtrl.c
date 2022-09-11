 /*************************
 * FILE DESCRIPTION
 **************************/

 /**  \file    IntCrtl.c
 *   \breif   Nested Vector Interrupt Controller Driver
 * 
 * 
 *   \details The Driver Configure All MCU interrupts Priotiy into groups and subgroups
 *            Enable NVIC interrupt Gate for Peripherals
 * 
 **************************/

 /*************************
 * INCLUDES
 ***************************/
 #include "IntCtrl.h"
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

 /*************************
 * GLOBAL FUNCTIONS
 **************************/

 
 /*************************
 * \Syntax            :    void  IntCtrl_Init(void)
 * \Description       :    Intialize NVIC/SCB Module by parsing the configuration
 * 
 * \Sync\Async        :    Synchronous
 * \Reentrancy        :    Non Reentrant
 * \Parameters  (in)  :    None
 * \Parameters  (out) :    None
 * \Return value      :    None
 * 
 * **************************/
 void IntCtrl_Init(void)
 {
  //1. configure grouping/subgrouping system in apint register in scb


 //2. Assign Group/Subgroup priority in NVIC_PRIx and SCB_SYSPRIx Registers


  //3. enable/disable based on user configuration in NVIC_ENx and SCB_Sys Registers


  
 }

  /*************************
 * END OF FILE
 **************************/

 