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
 #include "IntCtrl_Cfg.h"
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
 * \Description       :    Set the grouping and sub grouping
 * 
 * \Sync\Async        :    Synchronous
 * \Reentrancy        :    Non Reentrant
 * \Parameters  (in)  :    None
 * \Parameters  (out) :    None
 * \Return value      :    None
 * 
 * **************************/

//3.basepri NVIC/SCB 4.peri
 void IntCtrl_voidInit(void)
 {
  //1. configure grouping/subgrouping system in apint register in scb
  CORTEXM4_APINT = 0x05FA0000|(GROUPBITS << 7);
 }

 void IntCtrl_voidSetPriority(uint8 Copy_u8InterruptPosition, uint8 Copy_u8GroupPriority, uint8 Copy_u8SubPriority)
 {

 }

 void IntCtrl_voidEnableInterrupt(uint8 Copy_u8InterruptPotiotion)
 {

 }

 void IntCtrl_voidDisableInterrupt(uint8  Copy_u8InterruptPosition)
 {

 }

 void IntCtrl_voidSetPendingFlag(uint8  Copy_u8InterruptPosition)
 {
  
 }

  /*************************
 * END OF FILE
 **************************/

 