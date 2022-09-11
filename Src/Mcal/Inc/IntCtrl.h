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
 #include "IntCtrl_Cfg.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/

/*************************
 * GLOBAL FUNCTION MACROS
 **************************/

/*************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *************************/

/*************************
 * GLOBAL DATA PROTOTYPES
 **************************/

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

#endif
/*************************
 * END OF FILE
 **************************/
