/* 
 * File:   pwm_controller.h
 * Author: ugrin
 *
 * Created on July 29, 2021, 1:15 PM
 */

#ifndef PWM_CONTROLLER_H
#define	PWM_CONTROLLER_H

#include <xc.h>
#include <stdint.h>
#include "robot_params.h"


#define PWM_RESOLUTION 230
#define NUMBER_OF_TEST_POINTS 5
#define CALIB_DIV 1013897.5

uint8_t _pwm_counter = 0;

uint8_t servo_timings[NUMBER_OF_SERVOS] = {0};
uint16_t servo_delays[PWM_RESOLUTION] = {0};

double servo_calibrations[NUMBER_OF_SERVOS][2];
double meanY = 0.0;
double meanX = 229/2.0;
//double calib_div = ;
uint8_t adcValues[NUMBER_OF_SERVOS * NUMBER_OF_TEST_POINTS] = {0};

void pwm_init();
void pwm_interrupt_handler(void);
void set_servo(uint8_t idx, uint8_t pos);

void set_all_servo_pins(uint8_t state);
void _set_servo_pin(uint16_t idx, uint8_t state);
uint8_t _get_servo_pin(uint8_t idx);


void calibrate_servo(uint8_t idx);

#endif	/* PWM_CONTROLLER_H */

