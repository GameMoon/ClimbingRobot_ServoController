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
#include "mcc_generated_files/i2c2_slave.h"
#include <xc.h>

/*
                         Main application
 */

void sender_it(){
    I2C2_Write(0x13);
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
    
    
    pwm_init();

    //Set all servo to middle position
    for(uint8_t k = 0; k < NUMBER_OF_SERVOS; k++){
        set_servo(k,PWM_RESOLUTION/2);
    }

    I2C2_Open();
    I2C2_SlaveSetWriteIntHandler(sender_it);
    
    
    while (1)
    {   
        
        read_positions();
        // Add your application code
        //SRV_1_PWM_Toggle();
        /*if(testpos > 26) dir = 1;
        else if(testpos < 12) dir = 0;
        
        if(dir) testpos--;
        else testpos++;
        */
        //set_servo(0,testpos);
        //set_servo(1,testpos);
        //servo_pins[1] = ~servo_pins[1];
       /* *testPointer = 0x04;
        __delay_ms(10);
        *testPointer = 0x00;*/;
      
        
        
     /*   set_servo(0,0);
        __delay_ms(1000);*/
        /*set_servo(0,200);
        set_servo(1,200);
        __delay_ms(1000);
        set_servo(0,10);
        set_servo(1,10);
        __delay_ms(1000);*/
       
    }
}




/**
 End of File
*/