#include"STD_TYPES.h"
#include "BIT_MATH.h"
#include"DMA_private.h"
#include"DMA_interface.h"



void	DMA1_voidChannelInit(void)
{
	/*
		1- Memory to memory
		2- priority very high
		3- Source and destination Size = 32 bit
		4- MINC & PINC Active
		5- No circuler
		6- Direction Memory to memory (DIR = 0 , Src Peripheral, Des Memory) 
		7- Transfere complete interrupt
		0- Disable the channel
	*/
	DMA1 -> Channel[0].CCR = 0x00007AC2;
}
void	DMA1_voidChannelStart(u32 * SrcAdd,u32 * DesAdd,u16 BlockLength)
{
	/*		Disable the Channel			*/
	CLR_BIT((DMA1 -> Channel[0].CCR),0);
	
	DMA1 -> Channel[0].CPAR = SrcAdd;
	DMA1 -> Channel[0].CMAR = DesAdd;
	DMA1 -> Channel[0].CNDTR = BlockLength;
	
	/*		Enable the Channel			*/
	SET_BIT((DMA1 -> Channel[0].CCR),0);
}
