/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : MCU_Cfg.h
 *   Module :      -
 *
 *   Description:  -
 *
 ***************************/
#ifndef MCU_CFG_H
#define MCU_CFG_H

/*************************
 * INCLUDES
 ***************************/
#include "MCU_Types.h"

/*************************
 * GLOBAL CONSTANT MACROS
 ***************************/
 #define MOSCDIS         ENB_MOSC
 #define OSCSRC        OSC_SRC_MOSC

 #define USE_PLL      !ENB_PLL_BYPASS
 #define PLL_MODE       PLL_PWD_DOWN

#endif
/*************************
 * END OF FILE
 ***************************/
