/*************************
 * FILE DESCRIPTION
 ***************************/
/**  File   : BitMath.h
 *   Module :      -
 *
 *   Description:  -
 *
 ***************************/
#ifndef BitMath_H
#define BitMath_H

/*************************
 * INCLUDES
 ***************************/

/*************************
 * GLOBAL CONSTANT MACROS
 **************************/

#define SET_BIT(VAR, BIT) (VAR |= (0x01 << BIT))
#define CLR_BIT(VAR, BIT) (VAR &= ~(0x01 << BIT))
#define GET_BIT(VAR, BIT) ((VAR >> BIT) & 0x01)
#define TOG_BIT(VAR, BIT) (VAR ^= (1 << BIT))

/*************************
 * GLOBAL DATA PROTOTYPES
 ***************************/

/*************************
 * GLOBAL DATA TYPES AND STRUCTURES
 ***************************/

#endif
/*************************
 * END OF FILE
 **************************/
