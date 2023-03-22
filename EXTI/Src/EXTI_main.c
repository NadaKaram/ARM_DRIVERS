#include	"STD_Types.h"
#include	"BIT_Math.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include	"NVIC_int.h"
#include	"EXTI_interface.h"


void	_delay_ms(u32 Ticks)
{
	for(u32 i = 0; i < (Ticks * 500) ; i++)
	{
		asm("NOP");
	}
}

void	EXT0_INT(void);

int	main(void)
{
	/*	Initialization Part		*/

	/*	Call Backs				*/
	EXTI_voidSetCallBack(EXT0_INT);
	
	/*	System Clk init			*/
	MRCC_voidSysClkInit();
	
	/*	Toggle Led C13	GPIOC	*/
	/*	1- Enable Per Clk "RCC" Port C		*/
	MRCC_voidEnablePerClk(RCC_APB2,4);
	/*	2- Enable Per Clk "RCC" Port A		*/
	MRCC_voidEnablePerClk(RCC_APB2,2);
	
	/*	Direction for C13 is output Push Pull */
	M_GPIO_void_SetPinDir(PORTC_ID, PIN13_ID, OUT_2MHZ_PP);
	
	/*	Direction for A0 is Input Floatin */
	M_GPIO_void_SetPinDir(PORTA_ID, PIN0_ID, IN_FLOATING);
	// for internal pull up
	M_GPIO_void_SetPinValue(PORTA_ID,PIN0_ID,HIGH);
	/*	NVIC Initialization		*/
	NVIC_void_Init();
	
	/*	EXTI0 NVIC interrupt Enable 			*/
	NVIC_void_EnableInt(6);
	
	/*	EXTI0 Is in Group id = 3 and Sub Group id = 1	*/
	NVIC_void_Set_Periority(6,0b1101);

	/*	EXTI0 Peripheral Interrupt Enable 	(A0)		*/
	EXTI_voidEnableLine(0);
	EXTI_voidSetExtiEdge(0,EXTI_FALLING);
	
	while(1)
	{

	}
	return 0;
}
void	EXT0_INT(void)
{
		/*	Toggle led */
	   M_GPIO_void_SetPinValue(PORTC_ID, PIN13_ID,LOW);
		_delay_ms(10);
		M_GPIO_void_SetPinValue(PORTC_ID, PIN13_ID,HIGH);
		_delay_ms(10);

}
