#include "pwm_controller.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr0.h"
#include "mcc_generated_files/mcc.h"
#include <string.h>
#include <stdlib.h>


uint8_t test = 1;

void pwm_interrupt_handler(void){
    
    if(_pwm_counter == servo_timings[0]) SRV_1_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[1]) SRV_2_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[2]) SRV_3_PWM_LAT = 0;
    
    if(_pwm_counter == servo_timings[3]) SRV_4_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[4]) SRV_5_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[5]) SRV_6_PWM_LAT = 0;
    
    if(_pwm_counter == servo_timings[6]) SRV_7_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[7]) SRV_8_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[8]) SRV_9_PWM_LAT = 0;
    
    if(_pwm_counter == servo_timings[9]) SRV_10_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[10]) SRV_11_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[11]) SRV_12_PWM_LAT = 0;
 
    
    if(_pwm_counter == PWM_RESOLUTION){       
        //FFEC - 10 us
        //75B8 - 17770 us
        //TMR0_WriteTimer(0x75A4);
        PIE3bits.SSP2IE = 1;
        TMR0H = 0x75;
        TMR0L = 0xA4;
        _pwm_counter = 0;
    }
    else if(_pwm_counter == 0){
        PIE3bits.SSP2IE = 0;
        SRV_1_PWM_LAT = 1;
        SRV_2_PWM_LAT = 1;
        SRV_3_PWM_LAT = 1;
        SRV_4_PWM_LAT = 1;
        SRV_5_PWM_LAT = 1;
        SRV_6_PWM_LAT = 1;
        SRV_7_PWM_LAT = 1;
        SRV_8_PWM_LAT = 1;
        SRV_9_PWM_LAT = 1;
        SRV_10_PWM_LAT = 1;
        SRV_11_PWM_LAT = 1;
        SRV_12_PWM_LAT = 1;
        asm("incf __pwm_counter,1");

    }
    else asm("incf __pwm_counter,1");
}


void set_all_servo_pins(uint8_t state){
    if(state == 1){
        SRV_1_PWM_LAT = 1;
        SRV_2_PWM_LAT = 1;
        SRV_3_PWM_LAT = 1;
        SRV_4_PWM_LAT = 1;
        SRV_5_PWM_LAT = 1;
        SRV_6_PWM_LAT = 1;
        SRV_7_PWM_LAT = 1;
        SRV_8_PWM_LAT = 1;
        SRV_9_PWM_LAT = 1;
        SRV_10_PWM_LAT = 1;
        SRV_11_PWM_LAT = 1;
        SRV_12_PWM_LAT = 1;
    }
    else{
        SRV_1_PWM_LAT = 0;
        SRV_2_PWM_LAT = 0;
        SRV_3_PWM_LAT = 0;
        SRV_4_PWM_LAT = 0;
        SRV_5_PWM_LAT = 0;
        SRV_6_PWM_LAT = 0;
        SRV_7_PWM_LAT = 0;
        SRV_8_PWM_LAT = 0;
        SRV_9_PWM_LAT = 0;
        SRV_10_PWM_LAT = 0;
        SRV_11_PWM_LAT = 0;
        SRV_12_PWM_LAT = 0;
    }
}

void set_servo(uint8_t idx, uint8_t pos){
    servo_timings[idx] = pos;
}
void set_all_servos(uint8_t * pos){
    for(uint8_t i = 1; i < NUMBER_OF_SERVOS; i++)
    servo_timings[i] = pos[i];
    /*servo_timings[1] = pos[1];
    servo_timings[2] = pos[2];

    servo_timings[3] = pos[3];
    servo_timings[4] = pos[4];
    servo_timings[5] = pos[5];

    servo_timings[6] = pos[6];
    servo_timings[7] = pos[7];
    servo_timings[8] = pos[8];
    
    servo_timings[9] = pos[9];
    servo_timings[10] = pos[10];
    servo_timings[11] = pos[11];*/
    //memcpy(servo_timings,pos,NUMBER_OF_SERVOS);
}

void pwm_init(){
    TMR0_SetInterruptHandler(pwm_interrupt_handler);
    TMR0_StartTimer();
    SRV_5_PWM_LAT = test;
}
