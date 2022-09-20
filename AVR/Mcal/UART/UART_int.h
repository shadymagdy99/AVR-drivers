/*
 * UART_int.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Shady Magdy
 */

#ifndef UART_UART_INT_H_
#define UART_UART_INT_H_
#include <avr/interrupt.h>
#include <stdlib.h>

void M_UART_void_Init(void);
void M_UAR_void_sendByte(u8 copy_u8Byte);
u8 M_UART_u8_receiveByte(void);
void M_UART_void_sendString(u8 * str );
/*
 * created by : Shady Magdy
 */
void M_UART_void_Enable_Tx_Interrupt(void);

void M_UART_void_Disable_Tx_Interrupt(void);

void M_UART_TX_Complete_SetCallBack(void (*Copy_Ptr)(void));

void M_UART_void_Enable_Rx_Interrupt(void);

void M_UART_void_Disable_Rx_Interrupt(void);

void M_UART_RX_Complete_SetCallBack(void (*Copy_Ptr)(void));


#endif /* UART_UART_INT_H_ */
