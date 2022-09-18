/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : IntCtrl.h
 *   Module : IntCtrl
 *
 *   Description:  header file for interrupt control
 *
 ***************************/
#ifndef IntCtrl_H
#define IntCtrl_H

/*************************
 * INCLUDES
 ***************************/

 #include "Std_Types.h"
 #include "IntCtrl_Types.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
          
 #if GROUPBITS == GROUPPRIO_3BITS
  #define GROUPS      8
  #define SUBGROUPS   0
 #elif GROUPBITS == GROUPPRIO_2BITS
  #define GROUPS      4
  #define SUBGROUPS   2
 #elif GROUPBITS == GROUPPRIO_1BITS
  #define GROUPS      2
  #define SUBGROUPS   4
 #elif GROUPBITS == GROUPPRIO_0BITS
  #define GROUPS      0
  #define SUBGROUPS   8
 #endif   



/*************************
 * GLOBAL FUNCTION PROTOTYPES
 *************************/
 
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
 void IntCtrl_Init(void);
 
 
 void IntCtrl_voidSetPriority(uint8 Copy_u8InterruptPosition, uint8 Copy_u8GroupPriority, uint8 Copy_u8SubPriority);

 void IntCtrl_voidEnableInterrupt(uint8 Copy_u8InterruptPotiotion);

 void IntCtrl_voidDisableInterrupt(uint8  Copy_u8InterruptPosition);

 void IntCtrl_voidSetPendingFlag(uint8  Copy_u8InterruptPosition);

#endif
/*************************
 * END OF FILE
 **************************/
