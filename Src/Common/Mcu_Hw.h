/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : Mcu_hw.h.h
 *   Module :   Mcu_hw
 *
 *   Description:  registers for the microcontroller
 *
 ***************************/
#ifndef MCU_HW_H
#define MCU_HW_H
#include "Std_Types.h"
/*************************
 * GLOBAL CONSTANT MACROS
 **************************/
#define CORTEXM4_PERI_BASE_ADDR 0xE000E000

// nvic registers

// system control block registers
#define CORTEXM4_ACTLR *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0x008))
#define CORTEXM4_CPUID *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD00))
#define CORTEXM4_INTCTRL *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD04))

#define CORTEXM4_VTABLE *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD08))
#define CORTEXM4_APINT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD0C))
#define CORTEXM4_SYSCTRL *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD10))

#define CORTEXM4_CFGCTRL *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD14))
#define CORTEXM4_SYSPRI1 *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD18))
#define CORTEXM4_SYSPRI2 *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD1C))

#define CORTEXM4_SYSPRI3 *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD20))
#define CORTEXM4_SYSHNDCTRL *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD24))
#define CORTEXM4_FAULTSTAT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD28))

#define CORTEXM4_HFAULTSTAT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD2C))
#define CORTEXM4_MMADDR *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD34))
#define CORTEXM4_FAULTADDR *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0xD38))

// systick registers
#define CORTEXM4_STCTRL *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0x010))
#define CORTEXM4_STRELOAD *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0x014))
#define CORTEXM4_STCURRENT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDR + 0x018))

// System control registers
#define SYSCONTROL_BASE_ADDR 0x400FE000

#define SYSCONTROL_RCC *((volatile uint32 *)(SYSCONTROL_BASE_ADDR + 0x060))

#define SYSCONTROL_RCC2 *((volatile uint32 *)(SYSCONTROL_BASE_ADDR + 0x070))

#define SYSCONTROL_RCGCPIO *((volatile uint32 *)(SYSCONTROL_BASE_ADDR + 0x608))

// GPIO Reg


#define GPIO_PA_APB_DIR *((volatile uint32 *)(0x40004000 + 0x400))

#define GPIO_PA_APB_DEN *((volatile uint32 *) (0x40004000 + 0X51C))

#define GPIO_PA_APB_DATA *((volatile uint32 *)0x400043FC )



#endif
/*************************
 * END OF FILE
 **************************/
