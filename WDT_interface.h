/*
 * WDT_interface.h
 *
 *  Created on: Jul 31, 2023
 *      Author: Kareem Hussein
 */

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_


#define WDT_TIME_16_3_MS         1
#define WDT_TIME_32_5_MS         2
#define WDT_TIME_65_MS           3
#define WDT_TIME_0_13_S          4
#define WDT_TIME_0_26_S          5
#define WDT_TIME_0_52_S          6
#define WDT_TIME_1_S             7
#define WDT_TIME_2_1_S           8


void WDT_voidStart(u8 Copy_u8Time);
void WDT_voidStop (void);


#endif /* WDT_INTERFACE_H_ */
