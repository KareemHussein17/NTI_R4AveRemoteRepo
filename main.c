/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: Kareem Hussein
 */


#define F_CPU 16000000
#include <util/delay.h>

/* UTILES_LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* MCAL */
#include "WDT_interface.h"
#include "DIO_interface.h"

int main()
{
	DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	WDT_voidStart(WDT_TIME_2_1_S);
	DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
	_delay_ms(1000);
	DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
	while(1)
	{

	}
	WDT_voidStop();
	return 0;}
