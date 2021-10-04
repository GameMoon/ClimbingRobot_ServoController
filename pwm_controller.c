#include "pwm_controller.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/tmr0.h"
#include "mcc_generated_files/mcc.h"

void calibrate_servo(uint8_t idx){
    
    
    for(uint8_t k = 0; k < 230; k++){
        set_servo(idx,k);
        servo_calibrations[idx][1] = (ADC_GetConversion(SRV_1_ADC) & 0x3FC) >> 2;
         __delay_ms(100);
    }
    
    for(uint8_t k = 0; k < 230; k++){
        meanY += adcValues[k];
    }
    meanY /= 230;

    servo_calibrations[idx][0] = 0.0;
    
    for(uint8_t k =0; k < 230; k++){
        servo_calibrations[idx][0] += (k-meanX) * (adcValues[k]-meanY);
    }
    servo_calibrations[idx][0] /= CALIB_DIV;
    servo_calibrations[idx][1] = meanY - servo_calibrations[idx][0]*meanX;
    /*set_servo(0,0);*/
    __delay_ms(1000);
}

void pwm_interrupt_handler(void){

    uint16_t currentState = servo_delays[_pwm_counter];
    if(currentState)  _set_servo_pin(currentState,0); //set servo pin to zero if enough time elapsed
    
    if(_pwm_counter == PWM_RESOLUTION){
         
        set_all_servo_pins(0);
        TMR0_StopTimer();
        
        TMR1_WriteTimer(0x7ACC); // 400 us
        TMR1_StartTimer();
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
        set_all_servo_pins(1);
    }
     
}

void set_all_servo_pins(uint8_t state){
    _set_servo_pin(0xffff,state);
}

void set_servo(uint8_t idx, uint8_t pos){
    servo_timings[idx] = pos;
    
    for(uint8_t k = 0; k < 255;k++){
        servo_delays[k] &= ~(1<<idx);
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
}

void pwm_init(){
    TMR0_SetInterruptHandler(pwm_interrupt_handler);
    TMR1_SetInterruptHandler(delay_interrupt_handler);
    
    TMR1_StartTimer();
}