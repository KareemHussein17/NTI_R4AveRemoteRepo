/*
 * WDT_private.h
 *
 *  Created on: Jul 31, 2023
 *      Author: Kareem Hussein
 */

#ifndef WDT_PRIVATE_H_
#define WDT_PRIVATE_H_


                          /* WDT REGISTERS*/
								 
// Watchdog Timer Control Register
#define WDTCR             (*(volatile u8*)0x41)
#define WDP0              0
#define WDP1              1
#define WDP2              2
#define WDE               3
#define WDTOE             4


#endif /* WDT_PRIVATE_H_ */
