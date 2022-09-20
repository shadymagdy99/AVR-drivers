/*
 * WDT_private.h
 *
 *  Created on: Aug 31, 2022
 *      Author: Shady
 */

#ifndef WDT_WDT_PRIVATE_H_
#define WDT_WDT_PRIVATE_H_

#define WDTCR_REG     (*((volatile u8*)0x41))

#define WDTOE_BIT      4        //Watch dog Turn OFF Enable
#define WDE_BIT        3        //Watch dog Enable
#define WDP2_BIT       2        //prescaller 2
#define WDP1_BIT       1        //prescaller 1
#define WDP0_BIT       0        //prescaller 0

#define WDT_PRESCALER_MASK      0b11111000

#endif /* WDT_WDT_PRIVATE_H_ */
