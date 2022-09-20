/*
 * WDT_interface.h
 *
 *  Created on: Aug 31, 2022
 *      Author: Shady
 */

#ifndef WDT_WDT_INTERFACE_H_
#define WDT_WDT_INTERFACE_H_

#include "BitMath.h"
#include "StandardTypes.h"

#define    WDT_SLEEP_TIME_16_3_MS        0
#define    WDT_SLEEP_TIME_32_5_MS        1
#define    WDT_SLEEP_TIME_65_MS          2
#define    WDT_SLEEP_TIME_0_13_S         3
#define    WDT_SLEEP_TIME_0_26_S         4
#define    WDT_SLEEP_TIME_0_52_S         5
#define    WDT_SLEEP_TIME_2_1_S          7


void M_WDT_void_Enable(void);
void M_WDT_void_Disble(void);
void M_WDT_void_Sleep(u8 copy_u8_Time);
void M_WDT_void_Refresh(void);

#endif /* WDT_WDT_INTERFACE_H_ */
