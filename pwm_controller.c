#include "pwm_controller.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr0.h"
#include "mcc_generated_files/mcc.h"
#include <string.h>
#include <stdlib.h>

void pwm_interrupt_handler(void){

    /*uint16_t currentState = servo_delays[_pwm_counter];
    if(currentState)  
        _set_servo_pin(currentState,0); //set servo pin to zero if enough time elapsed*/
    
    if(_pwm_counter == servo_timings[1]) SRV_2_PWM_LAT = 0;
    if(_pwm_counter == servo_timings[0]) SRV_1_PWM_LAT = 0;
   
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
         
        //set_all_servo_pins(0);
        //SRV_2_PWM_LAT = 0;
        //TMR0_StopTimer();
        
        //FFEC - 10 us
        //75B8 - 17770 us
        TMR0_WriteTimer(0x75A4);
        _pwm_counter = 0;
       
        //TMR1_WriteTimer(0x7ACC); // 400 us
        //TMR1_StartTimer();
    }
    else if(_pwm_counter == 0){
        set_all_servo_pins(1);
       //SRV_2_PWM_LAT = 1;
        // TMR0_Reload();
       _pwm_counter++;
    }
    else _pwm_counter++;
}


void set_all_servo_pins(uint8_t state){
    SRV_1_PWM_LAT = state;
    SRV_2_PWM_LAT = state;
    SRV_3_PWM_LAT = state;
    SRV_4_PWM_LAT = state;
    SRV_5_PWM_LAT = state;
    SRV_6_PWM_LAT = state;
    SRV_7_PWM_LAT = state;
    SRV_8_PWM_LAT = state;
    SRV_9_PWM_LAT = state;
    SRV_10_PWM_LAT = state;
    SRV_11_PWM_LAT = state;
    SRV_12_PWM_LAT = state;
}

void set_servo(uint8_t idx, uint8_t pos){
    servo_timings[idx] = pos;

}
void set_all_servos(uint8_t * pos){
    memcpy(servo_timings,pos,NUMBER_OF_SERVOS);
}

void pwm_init(){
    TMR0_SetInterruptHandler(pwm_interrupt_handler);
  //  TMR1_SetInterruptHandler(delay_interrupt_handler);
    
    TMR0_StartTimer();
}