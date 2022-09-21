/*************************
 * FILE DESCRIPTION
 * **************************/
/**  \file     MCU_program.c.c
 *   \breif    module to configure the clock and peripherals 
 *   \details
 * 
 *-**************************/
/*************************
 * INCLUDES
 * **************************/

 #include "Bit_Math.h"
 #include "Std_Types.h"
 #include "Mcu_Hw.h"

 #include "MCU_Cfg.h"
 #include "MCU_interface.h"

 /*************************
 * LOCAL DATA
 * **************************/

/*************************
 * GLOABAL DATA
 **************************-*/

 /*************************
 * LOCAL FUNCTION PROTOTYPES
 * **************************/

 /*************************
 * LOCAL FUNCTIONS
 ***************************/

 /*************************
 * GLOBAL FUNCTIONS
 ***************************/

  void MCU_voidInitClock(void)
  {
   SYSCONTROL_RCC = 0;  //Reset Value

    SYSCONTROL_RCC |= MOSCDIS<<0;
    SYSCONTROL_RCC |= OSCSRC<<4;

    SYSCONTROL_RCC |= USE_PLL<<11;
    SYSCONTROL_RCC |= PLL_MODE<<13;

    
  }

  void MCU_voidEnableGPIO(uint8 GP)
  {   
    if (GP <= 5)
      SET_BIT( SYSCONTROL_RCGCPIO,GP);
  }

  /*************************
 * END OF FILE
 ***************************/

 