/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15375
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "pwm_controller.h"
#include "adc_controller.h"
//#include "i2c_handler.h"
#include "mcc_generated_files/i2c2_slave.h"
#include <xc.h>

/*
                         Main application
 */



uint8_t rec_data;
uint8_t rec_address;
bool isReadMode = false;

uint8_t counter = 0;
uint8_t selector = 0xFF;
uint8_t has_reg_addr = 0;

uint8_t swap_buffer = 0;
uint8_t servo_buffers[16][2];

uint8_t servo_buffer_1[16] = {0};
uint8_t servo_buffer_2[16] = {0};

uint8_t coil_status = 0;
uint8_t old_coil_status = 0;

uint8_t new_data = 0;


//Handling I2C interrupts
void set_coils(uint8_t data){
    SOL_1_LAT = data;
    SOL_2_LAT = (data >> 1);
    SOL_3_LAT = (data >> 2);
    SOL_4_LAT = (data >> 3);
}

void address_it(){
    //Detect overflow
    if(SSP2CON1bits.SSPOV) SSP2CON1bits.SSPOV = 0;
    
   // SSP2BUF = 0; //clear buffer
    new_data = SSP2BUF;
    
    if(!SSP2STATbits.R_nW)
        rec_address = 0;
    
    counter=0;
    selector = 0xFF;
    
}

//Sending data to master
void sender_it(){
   
    if(rec_address == 0x01){
        if(counter < NUMBER_OF_SERVOS){
            SSP2BUF = servo_positions[counter];
        }
        else SSP2BUF = 0;
        counter++;
    }
    else SSP2BUF = 0;
}

//Incoming data from master
void receiver_it(){
    //rec_data = SSP2BUF;
   
    if(rec_address == 0){
        rec_address = SSP2BUF;
    }
    else if(rec_address == 0x02 ){ //Set all servos
        
       
        //if(counter < 12){
        if(swap_buffer) servo_buffer_2[counter] = SSP2BUF;
        else servo_buffer_1[counter] = SSP2BUF;
        //}
        if(counter == 11){
           if(swap_buffer) servo_timings = &servo_buffer_2;
           else servo_timings = &servo_buffer_1;
            swap_buffer = ~swap_buffer;
        }
        else asm("incf _counter,1");
    }
    else if(rec_address == 0x03){ //Set individual servo
        if(selector == 0xFF) selector = SSP2BUF;
        else if(selector < 12){
            set_servo(selector,SSP2BUF);
        }
    }
    else if(rec_address == 0x04){  //Set coils
        set_coils(SSP2BUF);
    }
}

void main(void)
{
    
    // initialize the device
    SYSTEM_Initialize();
    
  
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:
    
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
   /* for(uint8_t k = 0; k< 2;k++){
        for(uint8_t i = 0; i < NUMBER_OF_SERVOS; i++)
            servo_buffers[k][i] = 0;
    }
    servo_timings = &servo_buffers[1];*/
    servo_timings = &servo_buffer_2;
    pwm_init();
    
    //Set all servo to middle position
    for(uint8_t k = 0; k < NUMBER_OF_SERVOS; k++){
        set_servo(k,PWM_RESOLUTION/2);
    }
    //set_servo(0,2);
    
    //Setup I2C
    I2C2_Open();
 /*   I2C2_SlaveSetWriteIntHandler(sender_it);
    I2C2_SlaveSetReadIntHandler(receiver_it);
    I2C2_SlaveSetAddrIntHandler(address_it);
    */
    //init adc
    adc_init();
    
    while (1)
    {  
       read_positions();
      /* if(process_pos == 1){
           set_all_servos(result);
           process_pos = 0;
       }*/
    }
}




/**
 End of File
*/