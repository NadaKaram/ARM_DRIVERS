/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include	"STD_TYPES.h"
#include	"BIT_MATH.h"
#include    "Delay.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include    "LCD_int.h"
#include    "KEYPAD_int.h"


u8 Key;
int	main(void)
{
	/*	Initialization Part		*/

	/*	System Clk init			*/
	MRCC_voidSysClkInit();


	/*	Toggle Led C13	GPIOC	*/
	/*	1- Enable Per Clk "RCC" Port A		*/
	MRCC_voidEnablePerClk(RCC_APB2,2);
	/*	1- Enable Per Clk "RCC" Port B		*/
	MRCC_voidEnablePerClk(RCC_APB2,3);

	//LCD INITIALIZE
	H_LCD_void_Init();
	H_KEYPAD_void_init();
  /* Key=H_KEYPAD_void_getPressedKey();
   if (Key!=NO_PRESSED_KEY)
   {
	   H_LCD_void_sendData(Key);
   }
*/

	while(1)
	{
		Key=H_KEYPAD_void_getPressedKey();
		H_LCD_void_gotXY(0,1);
		   if (Key!=NO_PRESSED_KEY)
		   {
			   H_LCD_void_sendData(Key);
		   }
		   _delay_ms(500);
		   H_LCD_void_clear();
	}
	return 0;
}


