#include "pwm_controller.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/tmr0.h"


void pwm_interrupt_handler(void){

    //if(_pwm_counter >= _min_pos && _pwm_counter <= _max_pos){
        //Turn off servo pins, when enough time elapsed
       /* for(uint8_t k = 0; k < NUMBER_OF_SERVOS; k++){
           // if(_pwm_counter < servo_pos[k]) break;
            else if(_pwm_counter == servo_pos[k]) _set_servo_pin
        }*/
      
       
        
        /*if(_pwm_counter == servo_pos[1]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[2]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[3]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[4]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[5]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[6]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[7]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[8]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[9]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[10]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[11]) _set_servo_pin(0x1,0);
        if(_pwm_counter == servo_pos[12]) _set_servo_pin(0x1,0);*/
    //}
    uint16_t currentState = servo_delays[_pwm_counter];
    if(currentState)  _set_servo_pin(currentState,0);
    
    if(_pwm_counter == PWM_RESOLUTION){
         
        set_all_servo(0);
        //set_all_servo(0);
        //Stop timer0
        //TMR2_StopTimer();
        
        //TMR1_WriteTimer(0x7ACC); //17050 us
        //TMR1_StopTimer();

        TMR0_StopTimer();
        
        TMR1_WriteTimer(0x7ACC); // 400 us
        TMR1_StartTimer();
        //SRV_2_PWM_SetLow();
        //set_all_servo(0);
    }
    else _pwm_counter++;
}
void delay_interrupt_handler(void){
   
   
    if(_pwm_counter == 0){
        TMR1_StopTimer();
        TMR0_StartTimer();
        
    }
    else if(_pwm_counter == PWM_RESOLUTION){
        _pwm_counter = 0;
        TMR1_Reload();
        set_all_servo(1);
    }
     
}

void set_all_servo(uint8_t state){
    //for(uint8_t k = 0; k < NUMBER_OF_SERVOS; k++)
    _set_servo_pin(0xffff,state);
    //SRV_2_PWM_LAT = state;
}

void set_servo(uint8_t idx, uint8_t pos){
  /*  if(pos < _min_pos) _min_pos = pos;
    if(pos > _max_pos) _max_pos = pos;
*/
    servo_pos[idx] = pos;
    
    for(uint8_t k = 0; k < 255;k++){
        servo_delays[k] &= (0<<idx);
    }
     servo_delays[pos] |= (1<<idx);
}


uint8_t _get_servo_pin(uint8_t idx){
    if(idx == 0) return SRV_1_PWM_PORT;
    else if(idx == 1) return SRV_2_PWM_PORT;
    else if(idx == 2) return SRV_3_PWM_PORT;
    else if(idx == 3) return SRV_4_PWM_PORT;
    else if(idx == 4) return SRV_5_PWM_PORT;
    else if(idx == 5) return SRV_6_PWM_PORT;
    else if(idx == 6) return SRV_7_PWM_PORT;
    else if(idx == 7) return SRV_8_PWM_PORT;
    else if(idx == 8)  return SRV_9_PWM_PORT;
    else if(idx == 9)  return SRV_10_PWM_PORT;
    else if(idx == 10) return SRV_11_PWM_PORT;
    else if(idx == 11) return SRV_12_PWM_PORT;
    else return 0;
}

void _set_servo_pin(uint16_t idx, uint8_t state){
    
    if(idx & 0x1) SRV_1_PWM_LAT = state;
    if(idx & 0x2) SRV_2_PWM_LAT = state;
    if(idx & 0x4) SRV_3_PWM_LAT = state;
    if(idx & 0x8) SRV_4_PWM_LAT = state;
    if(idx & 0x10) SRV_5_PWM_LAT = state;
    if(idx & 0x20) SRV_6_PWM_LAT = state;
    if(idx & 0x40) SRV_7_PWM_LAT = state;
    if(idx & 0x80) SRV_8_PWM_LAT = state;
    if(idx & 0x100)  SRV_9_PWM_LAT = state;
    if(idx & 0x200)  SRV_10_PWM_LAT = state;
    if(idx & 0x400) SRV_11_PWM_LAT = state;
    if(idx & 0x800) SRV_12_PWM_LAT = state;
    /*SRV_1_PWM_LAT = idx & state;
    SRV_2_PWM_LAT = idx>>1 & state;
    SRV_3_PWM_LAT = idx>>2 & state;
    SRV_4_PWM_LAT = idx>>3 & state;
    SRV_5_PWM_LAT = idx>>4 & state;
    SRV_6_PWM_LAT = idx>>5 & state;
    SRV_7_PWM_LAT = idx>>6 & state;
    SRV_8_PWM_LAT = idx>>7 & state;
    SRV_9_PWM_LAT = idx>>8 & state;
    SRV_10_PWM_LAT = idx>>9 & state;
    SRV_11_PWM_LAT = idx>>10 & state;
    SRV_12_PWM_LAT = idx>>11 & state;*/
}

void pwm_init(){
    TMR0_SetInterruptHandler(pwm_interrupt_handler);
    TMR1_SetInterruptHandler(delay_interrupt_handler);
    
    TMR1_StartTimer();
    
    
}