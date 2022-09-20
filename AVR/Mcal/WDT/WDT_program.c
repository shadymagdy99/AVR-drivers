/*
 * WDT_program.c
 *
 *  Created on: Aug 31, 2022
 *      Author: Shady
 */

#include "WDT_private.h"
#include "WDT_interface.h"

void M_WDT_void_Enable(void)
{
	SET_BIT(WDTCR_REG,WDE_BIT);

}
void M_WDT_void_Disble(void)
{
	//step 1 : write 1 in both bits @same operation
	WDTCR_REG |= (1<<WDTOE_BIT) | (1<<WDE_BIT);
	//step 2 : Write 0 in WDE
	WDTCR_REG = 0x00;
}
void M_WDT_void_Sleep(u8 copy_u8_Time)
{
	// step 1 : apply mask
	WDTCR_REG &= WDT_PRESCALER_MASK;
	//step 2 : insert prescaler
	WDTCR_REG |= copy_u8_Time;


}
void M_WDT_void_Refresh(void)
{
	asm("WDR");


}
