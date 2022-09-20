/*
 * UART_config.h
 *
 *  Created on: Aug 24, 2022
 *      Author: Shady Magdy
 */

#ifndef UART_UART_CONFIG_H_
#define UART_UART_CONFIG_H_

/*
 *  choose data size :
 *  UART_DATA_SIZE_5_BITS
 *  UART_DATA_SIZE_6_BITS
 *  UART_DATA_SIZE_7_BITS
 *  UART_DATA_SIZE_8_BITS
 */
#define UART_DATA_SIZE  UART_DATA_SIZE_8_BITS

/*
 *   choose parity :
 *   UART_PARITY_ODD
 *   UART_PARITY_EVEN
 *   UART_PARITY_NO_PARITY
 */
#define UART_PARITY  UART_PARITY_NO_PARITY

/*
 * choose stop bits :
 * UART_STOP_BITS_1
 * UART_STOP_BITS_2
 */
#define UART_STOP_BITS   UART_STOP_BITS_1

/*
 * choose from :
  UART_BR_16MHZ_2400
  UART_BR_16MHZ_9600
  UART_BR_16MHZ_115200

  UART_BR_8MHZ_2400
  UART_BR_8MHZ_9600
  UART_BR_8MHZ_115200
 */
#define UART_BAUD_RATE   UART_BR_16MHZ_9600
#endif /* UART_UART_CONFIG_H_ */
