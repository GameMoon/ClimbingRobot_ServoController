/* 
 * File:   adc_controller.h
 * Author: ugrin
 *
 * Created on September 25, 2021, 7:29 PM
 */

#ifndef ADC_CONTROLLER_H
#define	ADC_CONTROLLER_H

#include <xc.h>
#include <stdint.h>
#include "robot_params.h"

#ifdef	__cplusplus
extern "C" {
#endif

#define ACQ_US_DELAY_ADC 5
    
uint8_t servo_adc_channels[] ={
   0x1, //channel 1
   0x3,
   0x5,
   0x22,
   0x6,
   0x11,
   0x17,
   0x1D,
   0x1F,
   0x18,
   0x1A,
   0x14};
  
uint8_t servo_positions[NUMBER_OF_SERVOS] = {0};
void read_positions();


#ifdef	__cplusplus
}
#endif

#endif	/* ADC_CONTROLLER_H */

