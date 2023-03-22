/*
 * main.c
 *
 *  Created on: 5/3/2023
 *      Author: Nada Karam
 */
#include	"STD_Types.h"
#include	"BIT_Math.h"

#include	"PB_int.h"
#include	"SSD_int.h"

#include	"RCC_interface.h"
#include	"DIO_interface.h"


void main(void)
{
	/*****************  Initialization Part  ****************/

	u8 Local_u8Value = DIO_HIGH;
	u8 Local_u8Num = 0;
	PB_t PB1 = {1,PORTA, PIN0, ACTIVE_LOW , NOT_PRESSED_AL};

	// System Clk init
	MRCC_voidSysClkInit();

	// Enable Per Clk "RCC" DIO_A
	MRCC_voidEnablePerClk(RCC_APB2,DIO_A);

	// Init PB
	H_PB_voidinit(& PB1);

	// Init SSD
	H_SSD_voidinit();


	while(1)
	{
		H_PB_voidread_1	(& PB1, &Local_u8Value);
		if(Local_u8Value == PRESSED_AL)
		{
			if(Local_u8Num < 9)
			{
				H_SSD_voiddisplayNumber(Local_u8Num++);
			}
			else
			{
				Local_u8Num = 0;
			}

		}
		else
		{
			/* DO NOTHING */
		}
	}
}

