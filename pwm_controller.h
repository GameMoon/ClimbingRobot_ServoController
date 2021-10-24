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


//max 2300 us
#define PWM_RESOLUTION 153//115//230


uint8_t _pwm_counter = 0;

uint8_t servo_timings[NUMBER_OF_SERVOS] = {0};

void pwm_init();
void pwm_interrupt_handler(void);
void set_servo(uint8_t idx, uint8_t pos);
void set_all_servos(uint8_t * pos);

void set_all_servo_pins(uint8_t state);

#endif	/* PWM_CONTROLLER_H */

