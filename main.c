#include <util/delay.h>
#include "STD_types.h"
#include "BIT_MATH.h"
#include "ERROR_STATUS.h"
/***********************DIO*******************/
#include "DIO_register.h"
#include "DIO_interface.h"
/***********************TIM_0*****************/
#include "TIM_REG.h"
#include "TIM_int.h"
#include "Timer0_confg.h"



void main ()
{
	DIO_enumSetPinDirection(DIO_U8_PORT_B,DIO_U8_PIN3 , DIO_U8_OUTPUT); //OC0

	DIO_enumSetPinDirection(DIO_U8_PORT_A,DIO_U8_PIN7 , DIO_U8_OUTPUT);//Main_LED Indicator


	//ENABLE GIF
	SET_BIT(SREG,7);

	Timer0_Init( TIMER0_PHASECORRECT_MODE,TIMER0_SCALER_1 ,OCO_NON_INVERTING);
	Timer0_OC_InterruptEnable();
    OCR0=255;

	while (1)
	{
		DIO_enumSetPinValue( DIO_U8_PORT_A ,DIO_U8_PIN7,DIO_U8_HIGH  );
		_delay_ms(500);
		DIO_enumSetPinValue( DIO_U8_PORT_A ,DIO_U8_PIN7,DIO_U8_LOW   );
		_delay_ms(500);
	}


}


