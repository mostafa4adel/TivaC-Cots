#include "IntCtrl.h"
#include "MCU_interface.h"
#include "GPIO_interface.h"
#include "SYSTICK_interface.h"

void ToggleLed()
{
	static x = 0;
	
	if (x==0)
	{
		x = 1;
		GPIO_voidWriteToPortA(0x00);
	}
	else
	{
		x = 0;
		GPIO_voidWriteToPortA(0x01);
	}
}


int main(void)
{
	MCU_voidInitClock();
	
	MCU_voidEnableGPIO(0);
	
	GPIO_voidDirPortA((uint8)0x01);
	
	GPIO_voidEnablePortAPins((uint8)0x01);
	
	SYSCK_uint32LoadValueInSec(2);
	SYSCK_voidSetHandl(ToggleLed);
	
	SYSCK_voidInit();
	
	
	while(1)
	{
				
	}
	
	return 0;
}