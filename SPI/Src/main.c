#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include	"STK_interface.h"
#include	"SPI_int.h"



int	main(void)
{
	/*	Initialization Part		*/
	
	/*	System Clk init			*/
	MRCC_voidSysClkInit();
	
	/*	1- Enable Per Clk "RCC" Port A		*/

		MRCC_voidEnablePerClk(RCC_APB2,2);
		//ENABLE RCC CLK  FOR SPI PER
		MRCC_voidEnablePerClk(RCC_APB2,12);


	/* Set MOSI and SCK output, all others input */
		M_GPIO_void_SetPinDir(PORTA_ID, PIN7_ID, OUT_50MHZ_AF_PP);//FOR MOSI PIN
		M_GPIO_void_SetPinDir(PORTA_ID,PIN6_ID,IN_FLOATING) ;
		M_GPIO_void_SetPinDir(PORTA_ID,PIN5_ID, OUT_50MHZ_AF_PP); //FOR SCK PIN
		M_GPIO_void_SetPinDir(PORTA_ID,PIN0_ID, OUT_50MHZ_PP); // FOR NSS SLAVE SELECT


		M_SPI_void_MasterInit();

		M_GPIO_void_SetPinValue(PORTA_ID, PIN0_ID, HIGH);

	



	while(1)
	{
		 M_SPI_void_MasterTransmit('8');
		 STK_voidBusyWait(1000);
      //  M_SPI_void_SlaveReceive();
	}
	return 0;
}

