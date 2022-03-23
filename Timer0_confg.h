/*
 * Timer0.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Amira Abdel Wanis
 */

#ifndef TIMER0_CONFG_H_
#define TIMER0_CONFG_H_
#include "TIM_int.h"



void Timer0_Init( Timer0Mode_type mode,Timer0Scaler_type scaler ,OC0Mode_type oc_mode);
void Timer0_OV_InterruptEnable(void);
void Timer0_OV_InterruptDisable(void);
void Timer0_OC_InterruptEnable(void);
void Timer0_OC_InterruptDisable(void);
void TIMER00_VCallback(void(*x)(void));



#endif /* TIMER0_CONFG_H_ */
