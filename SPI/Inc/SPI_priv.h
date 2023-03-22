/*
 * SPI_priv.h
 *
 *  Author: Nada Karam
 */

#ifndef SPI_SPI_PRIV_H_
#define SPI_SPI_PRIV_H_

typedef	struct
{
	volatile	u32		SPI_CR1 ;
	volatile	u32		SPI_CR2 ;
	volatile	u32		SPI_SR ;
	volatile	u32     SPI_DR ;
	volatile	u32    SPI_CRCPR ;
	volatile	u32    SPI_RXCRCR ;
	volatile	u32    SPI_TXCRCR ;
	volatile	u32    SPI_I2SCFGR ;
	volatile	u32    SPI_I2SPR ;



}SPI_Type;

#define		SPI1 	((SPI_Type *) 0x40013000)

#endif /* SPI_SPI_PRIV_H_ */
