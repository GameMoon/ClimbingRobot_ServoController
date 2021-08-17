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

#define NUMBER_OF_SERVOS 12
#define PWM_RESOLUTION 255

uint8_t _pwm_counter = 0;

uint8_t _min_pos = PWM_RESOLUTION; //init to max
uint8_t _max_pos = 0;

uint8_t servo_pos[NUMBER_OF_SERVOS] = {0};

uint16_t servo_delays[PWM_RESOLUTION] = {0};

void pwm_init();
void pwm_interrupt_handler(void);
void set_servo(uint8_t idx, uint8_t pos);

void set_all_servo(uint8_t state);
void _set_servo_pin(uint16_t idx, uint8_t state);
uint8_t _get_servo_pin(uint8_t idx);

#endif	/* PWM_CONTROLLER_H */

