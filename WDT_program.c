/*
 * WDT_program.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Kareem Hussein
 */


/* UTILES_LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* MCAL */
#include "WDT_interface.h"
#include "WDT_private.h"


void WDT_voidStart(u8 Copy_u8Time)
{
	switch(Copy_u8Time)
	{
		case WDT_TIME_16_3_MS:
	   // Select Prescaler Value >>> 16.3 ms
	   CLR_BIT(WDTCR,WDP0);
	   CLR_BIT(WDTCR,WDP1);
	   CLR_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_32_5_MS:
	   // Select Prescaler Value >>> 32.5 ms
	   SET_BIT(WDTCR,WDP0);
	   CLR_BIT(WDTCR,WDP1);
	   CLR_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_65_MS:
	   // Select Prescaler Value >>> 65ms
	   CLR_BIT(WDTCR,WDP0);
	   SET_BIT(WDTCR,WDP1);
	   CLR_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_0_13_S:
	   // Select Prescaler Value >>> 0.13s
	   SET_BIT(WDTCR,WDP0);
	   SET_BIT(WDTCR,WDP1);
	   CLR_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_0_26_S:
	   // Select Prescaler Value >>> 0.26s
	   CLR_BIT(WDTCR,WDP0);
	   CLR_BIT(WDTCR,WDP1);
	   SET_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_0_52_S:
	   // Select Prescaler Value >>> 0.52s
	   SET_BIT(WDTCR,WDP0);
	   CLR_BIT(WDTCR,WDP1);
	   SET_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_1_S:
	   // Select Prescaler Value >>> 1s
	   CLR_BIT(WDTCR,WDP0);
	   SET_BIT(WDTCR,WDP1);
	   SET_BIT(WDTCR,WDP2);
		break;
		
		case WDT_TIME_2_1_S:
	   // Select Prescaler Value >>> 2.1s
	   SET_BIT(WDTCR,WDP0);
	   SET_BIT(WDTCR,WDP1);
	   SET_BIT(WDTCR,WDP2);
		break;
	}
	// Enable WDT
	SET_BIT(WDTCR,WDE);
}


void WDT_voidStop(void)
{
	/* Write logical one to WDTOE and WDE */
    WDTCR = (1<<WDTOE) | (1<<WDE);
	
    // Disable WDT
    WDTCR = 0x00;
}
