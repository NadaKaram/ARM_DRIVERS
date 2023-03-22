#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include	"STK_interface.h"
#include	"UART_ini.h"



int	main(void)
{
	/*	Initialization Part		*/
	
	/*	System Clk init			*/
	MRCC_voidSysClkInit();
	
	/*	Toggle Led C13	GPIOC	*/
	/*	1- Enable Per Clk "RCC" Port A		*/

	MRCC_voidEnablePerClk(RCC_APB2,2);
	MRCC_voidEnablePerClk(RCC_APB2,14);

	
	/*	Direction for PA9 is output AF */
	M_GPIO_void_SetPinDir(PORTA_ID, PIN9_ID, OUT_50MHZ_AF_PP);
	M_GPIO_void_SetPinDir(PORTA_ID, PIN10_ID, IN_FLOATING);

	M_UART_void_Init();
	
	while(1)
	{
		 M_UART_void_sendByte('5');
		 STK_voidBusyWait(1000);
        M_UART_u8_recieveByte();
	}
	return 0;
}

