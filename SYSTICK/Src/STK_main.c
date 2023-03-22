#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include	"NVIC_int.h"
#include     "STK_interface.h"


int	main(void)
{
	/*	Initialization Part		*/
	
	/*	System Clk init			*/
	MRCC_voidSysClkInit();
	
	/*	Toggle Led C13	GPIOC	*/
	/*	1- Enable Per Clk "RCC" Port C		*/
	MRCC_voidEnablePerClk(RCC_APB2,4);
	
	/*	Direction for C13 is output Push Pull */
	M_GPIO_void_SetPinDir(PORTC_ID, PIN13_ID, OUT_2MHZ_PP);
	
	/*	SysTick initilaization	*/
	STK_voidInit();
	
	
	while(1)
	{
		/*	Toggle led */
		M_GPIO_void_SetPinValue(PORTC_ID, PIN13_ID, LOW);
		STK_voidBusyWait(5000000);
		M_GPIO_void_SetPinValue(PORTC_ID, PIN13_ID,HIGH);
		STK_voidBusyWait(5000000);
	}
	return 0;
}
