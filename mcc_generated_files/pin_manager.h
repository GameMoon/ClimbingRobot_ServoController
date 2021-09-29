/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15375
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SRV_1_PWM aliases
#define SRV_1_PWM_TRIS                 TRISAbits.TRISA0
#define SRV_1_PWM_LAT                  LATAbits.LATA0
#define SRV_1_PWM_PORT                 PORTAbits.RA0
#define SRV_1_PWM_WPU                  WPUAbits.WPUA0
#define SRV_1_PWM_OD                   ODCONAbits.ODCA0
#define SRV_1_PWM_ANS                  ANSELAbits.ANSA0
#define SRV_1_PWM_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SRV_1_PWM_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SRV_1_PWM_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SRV_1_PWM_GetValue()           PORTAbits.RA0
#define SRV_1_PWM_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SRV_1_PWM_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SRV_1_PWM_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SRV_1_PWM_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SRV_1_PWM_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SRV_1_PWM_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SRV_1_PWM_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SRV_1_PWM_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set SRV_1_ADC aliases
#define SRV_1_ADC_TRIS                 TRISAbits.TRISA1
#define SRV_1_ADC_LAT                  LATAbits.LATA1
#define SRV_1_ADC_PORT                 PORTAbits.RA1
#define SRV_1_ADC_WPU                  WPUAbits.WPUA1
#define SRV_1_ADC_OD                   ODCONAbits.ODCA1
#define SRV_1_ADC_ANS                  ANSELAbits.ANSA1
#define SRV_1_ADC_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SRV_1_ADC_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SRV_1_ADC_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SRV_1_ADC_GetValue()           PORTAbits.RA1
#define SRV_1_ADC_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SRV_1_ADC_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SRV_1_ADC_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SRV_1_ADC_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SRV_1_ADC_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SRV_1_ADC_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SRV_1_ADC_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define SRV_1_ADC_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set SRV_2_PWM aliases
#define SRV_2_PWM_TRIS                 TRISAbits.TRISA2
#define SRV_2_PWM_LAT                  LATAbits.LATA2
#define SRV_2_PWM_PORT                 PORTAbits.RA2
#define SRV_2_PWM_WPU                  WPUAbits.WPUA2
#define SRV_2_PWM_OD                   ODCONAbits.ODCA2
#define SRV_2_PWM_ANS                  ANSELAbits.ANSA2
#define SRV_2_PWM_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SRV_2_PWM_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SRV_2_PWM_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SRV_2_PWM_GetValue()           PORTAbits.RA2
#define SRV_2_PWM_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SRV_2_PWM_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SRV_2_PWM_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SRV_2_PWM_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SRV_2_PWM_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SRV_2_PWM_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SRV_2_PWM_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SRV_2_PWM_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SRV_2_ADC aliases
#define SRV_2_ADC_TRIS                 TRISAbits.TRISA3
#define SRV_2_ADC_LAT                  LATAbits.LATA3
#define SRV_2_ADC_PORT                 PORTAbits.RA3
#define SRV_2_ADC_WPU                  WPUAbits.WPUA3
#define SRV_2_ADC_OD                   ODCONAbits.ODCA3
#define SRV_2_ADC_ANS                  ANSELAbits.ANSA3
#define SRV_2_ADC_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SRV_2_ADC_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SRV_2_ADC_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SRV_2_ADC_GetValue()           PORTAbits.RA3
#define SRV_2_ADC_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SRV_2_ADC_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SRV_2_ADC_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SRV_2_ADC_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SRV_2_ADC_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SRV_2_ADC_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SRV_2_ADC_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define SRV_2_ADC_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set SRV_3_PWM aliases
#define SRV_3_PWM_TRIS                 TRISAbits.TRISA4
#define SRV_3_PWM_LAT                  LATAbits.LATA4
#define SRV_3_PWM_PORT                 PORTAbits.RA4
#define SRV_3_PWM_WPU                  WPUAbits.WPUA4
#define SRV_3_PWM_OD                   ODCONAbits.ODCA4
#define SRV_3_PWM_ANS                  ANSELAbits.ANSA4
#define SRV_3_PWM_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SRV_3_PWM_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SRV_3_PWM_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SRV_3_PWM_GetValue()           PORTAbits.RA4
#define SRV_3_PWM_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SRV_3_PWM_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SRV_3_PWM_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SRV_3_PWM_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SRV_3_PWM_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SRV_3_PWM_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SRV_3_PWM_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SRV_3_PWM_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SRV_3_ADC aliases
#define SRV_3_ADC_TRIS                 TRISAbits.TRISA5
#define SRV_3_ADC_LAT                  LATAbits.LATA5
#define SRV_3_ADC_PORT                 PORTAbits.RA5
#define SRV_3_ADC_WPU                  WPUAbits.WPUA5
#define SRV_3_ADC_OD                   ODCONAbits.ODCA5
#define SRV_3_ADC_ANS                  ANSELAbits.ANSA5
#define SRV_3_ADC_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SRV_3_ADC_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SRV_3_ADC_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SRV_3_ADC_GetValue()           PORTAbits.RA5
#define SRV_3_ADC_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SRV_3_ADC_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SRV_3_ADC_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SRV_3_ADC_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SRV_3_ADC_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SRV_3_ADC_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SRV_3_ADC_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SRV_3_ADC_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SRV_5_ADC aliases
#define SRV_5_ADC_TRIS                 TRISAbits.TRISA6
#define SRV_5_ADC_LAT                  LATAbits.LATA6
#define SRV_5_ADC_PORT                 PORTAbits.RA6
#define SRV_5_ADC_WPU                  WPUAbits.WPUA6
#define SRV_5_ADC_OD                   ODCONAbits.ODCA6
#define SRV_5_ADC_ANS                  ANSELAbits.ANSA6
#define SRV_5_ADC_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define SRV_5_ADC_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define SRV_5_ADC_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define SRV_5_ADC_GetValue()           PORTAbits.RA6
#define SRV_5_ADC_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define SRV_5_ADC_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define SRV_5_ADC_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define SRV_5_ADC_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define SRV_5_ADC_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define SRV_5_ADC_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define SRV_5_ADC_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define SRV_5_ADC_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set SRV_4_PWM aliases
#define SRV_4_PWM_TRIS                 TRISAbits.TRISA7
#define SRV_4_PWM_LAT                  LATAbits.LATA7
#define SRV_4_PWM_PORT                 PORTAbits.RA7
#define SRV_4_PWM_WPU                  WPUAbits.WPUA7
#define SRV_4_PWM_OD                   ODCONAbits.ODCA7
#define SRV_4_PWM_ANS                  ANSELAbits.ANSA7
#define SRV_4_PWM_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define SRV_4_PWM_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define SRV_4_PWM_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define SRV_4_PWM_GetValue()           PORTAbits.RA7
#define SRV_4_PWM_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define SRV_4_PWM_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define SRV_4_PWM_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define SRV_4_PWM_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define SRV_4_PWM_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define SRV_4_PWM_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define SRV_4_PWM_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define SRV_4_PWM_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set SRV_9_PWM aliases
#define SRV_9_PWM_TRIS                 TRISBbits.TRISB0
#define SRV_9_PWM_LAT                  LATBbits.LATB0
#define SRV_9_PWM_PORT                 PORTBbits.RB0
#define SRV_9_PWM_WPU                  WPUBbits.WPUB0
#define SRV_9_PWM_OD                   ODCONBbits.ODCB0
#define SRV_9_PWM_ANS                  ANSELBbits.ANSB0
#define SRV_9_PWM_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SRV_9_PWM_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SRV_9_PWM_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SRV_9_PWM_GetValue()           PORTBbits.RB0
#define SRV_9_PWM_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SRV_9_PWM_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SRV_9_PWM_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SRV_9_PWM_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SRV_9_PWM_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SRV_9_PWM_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SRV_9_PWM_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define SRV_9_PWM_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set SRV_5_PWM aliases
#define SRV_5_PWM_TRIS                 TRISCbits.TRISC0
#define SRV_5_PWM_LAT                  LATCbits.LATC0
#define SRV_5_PWM_PORT                 PORTCbits.RC0
#define SRV_5_PWM_WPU                  WPUCbits.WPUC0
#define SRV_5_PWM_OD                   ODCONCbits.ODCC0
#define SRV_5_PWM_ANS                  ANSELCbits.ANSC0
#define SRV_5_PWM_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SRV_5_PWM_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SRV_5_PWM_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SRV_5_PWM_GetValue()           PORTCbits.RC0
#define SRV_5_PWM_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SRV_5_PWM_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SRV_5_PWM_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SRV_5_PWM_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SRV_5_PWM_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SRV_5_PWM_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SRV_5_PWM_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SRV_5_PWM_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SRV_6_ADC aliases
#define SRV_6_ADC_TRIS                 TRISCbits.TRISC1
#define SRV_6_ADC_LAT                  LATCbits.LATC1
#define SRV_6_ADC_PORT                 PORTCbits.RC1
#define SRV_6_ADC_WPU                  WPUCbits.WPUC1
#define SRV_6_ADC_OD                   ODCONCbits.ODCC1
#define SRV_6_ADC_ANS                  ANSELCbits.ANSC1
#define SRV_6_ADC_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SRV_6_ADC_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SRV_6_ADC_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SRV_6_ADC_GetValue()           PORTCbits.RC1
#define SRV_6_ADC_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SRV_6_ADC_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SRV_6_ADC_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SRV_6_ADC_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SRV_6_ADC_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SRV_6_ADC_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SRV_6_ADC_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SRV_6_ADC_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set SRV_6_PWM aliases
#define SRV_6_PWM_TRIS                 TRISCbits.TRISC2
#define SRV_6_PWM_LAT                  LATCbits.LATC2
#define SRV_6_PWM_PORT                 PORTCbits.RC2
#define SRV_6_PWM_WPU                  WPUCbits.WPUC2
#define SRV_6_PWM_OD                   ODCONCbits.ODCC2
#define SRV_6_PWM_ANS                  ANSELCbits.ANSC2
#define SRV_6_PWM_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SRV_6_PWM_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SRV_6_PWM_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SRV_6_PWM_GetValue()           PORTCbits.RC2
#define SRV_6_PWM_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SRV_6_PWM_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SRV_6_PWM_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SRV_6_PWM_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SRV_6_PWM_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SRV_6_PWM_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SRV_6_PWM_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SRV_6_PWM_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SRV_10_PWM aliases
#define SRV_10_PWM_TRIS                 TRISCbits.TRISC3
#define SRV_10_PWM_LAT                  LATCbits.LATC3
#define SRV_10_PWM_PORT                 PORTCbits.RC3
#define SRV_10_PWM_WPU                  WPUCbits.WPUC3
#define SRV_10_PWM_OD                   ODCONCbits.ODCC3
#define SRV_10_PWM_ANS                  ANSELCbits.ANSC3
#define SRV_10_PWM_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SRV_10_PWM_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SRV_10_PWM_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SRV_10_PWM_GetValue()           PORTCbits.RC3
#define SRV_10_PWM_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SRV_10_PWM_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SRV_10_PWM_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SRV_10_PWM_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SRV_10_PWM_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SRV_10_PWM_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SRV_10_PWM_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SRV_10_PWM_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SRV_12_ADC aliases
#define SRV_12_ADC_TRIS                 TRISCbits.TRISC4
#define SRV_12_ADC_LAT                  LATCbits.LATC4
#define SRV_12_ADC_PORT                 PORTCbits.RC4
#define SRV_12_ADC_WPU                  WPUCbits.WPUC4
#define SRV_12_ADC_OD                   ODCONCbits.ODCC4
#define SRV_12_ADC_ANS                  ANSELCbits.ANSC4
#define SRV_12_ADC_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SRV_12_ADC_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SRV_12_ADC_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SRV_12_ADC_GetValue()           PORTCbits.RC4
#define SRV_12_ADC_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SRV_12_ADC_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SRV_12_ADC_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SRV_12_ADC_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SRV_12_ADC_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SRV_12_ADC_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SRV_12_ADC_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SRV_12_ADC_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SOL_4 aliases
#define SOL_4_TRIS                 TRISCbits.TRISC5
#define SOL_4_LAT                  LATCbits.LATC5
#define SOL_4_PORT                 PORTCbits.RC5
#define SOL_4_WPU                  WPUCbits.WPUC5
#define SOL_4_OD                   ODCONCbits.ODCC5
#define SOL_4_ANS                  ANSELCbits.ANSC5
#define SOL_4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SOL_4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SOL_4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SOL_4_GetValue()           PORTCbits.RC5
#define SOL_4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SOL_4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SOL_4_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SOL_4_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SOL_4_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SOL_4_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SOL_4_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define SOL_4_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SOL_3 aliases
#define SOL_3_TRIS                 TRISCbits.TRISC6
#define SOL_3_LAT                  LATCbits.LATC6
#define SOL_3_PORT                 PORTCbits.RC6
#define SOL_3_WPU                  WPUCbits.WPUC6
#define SOL_3_OD                   ODCONCbits.ODCC6
#define SOL_3_ANS                  ANSELCbits.ANSC6
#define SOL_3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SOL_3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SOL_3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SOL_3_GetValue()           PORTCbits.RC6
#define SOL_3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SOL_3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SOL_3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SOL_3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SOL_3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SOL_3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SOL_3_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SOL_3_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SRV_7_ADC aliases
#define SRV_7_ADC_TRIS                 TRISCbits.TRISC7
#define SRV_7_ADC_LAT                  LATCbits.LATC7
#define SRV_7_ADC_PORT                 PORTCbits.RC7
#define SRV_7_ADC_WPU                  WPUCbits.WPUC7
#define SRV_7_ADC_OD                   ODCONCbits.ODCC7
#define SRV_7_ADC_ANS                  ANSELCbits.ANSC7
#define SRV_7_ADC_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SRV_7_ADC_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SRV_7_ADC_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SRV_7_ADC_GetValue()           PORTCbits.RC7
#define SRV_7_ADC_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SRV_7_ADC_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SRV_7_ADC_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SRV_7_ADC_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SRV_7_ADC_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SRV_7_ADC_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SRV_7_ADC_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SRV_7_ADC_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set SRV_10_ADC aliases
#define SRV_10_ADC_TRIS                 TRISDbits.TRISD0
#define SRV_10_ADC_LAT                  LATDbits.LATD0
#define SRV_10_ADC_PORT                 PORTDbits.RD0
#define SRV_10_ADC_WPU                  WPUDbits.WPUD0
#define SRV_10_ADC_OD                   ODCONDbits.ODCD0
#define SRV_10_ADC_ANS                  ANSELDbits.ANSD0
#define SRV_10_ADC_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define SRV_10_ADC_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define SRV_10_ADC_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define SRV_10_ADC_GetValue()           PORTDbits.RD0
#define SRV_10_ADC_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define SRV_10_ADC_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define SRV_10_ADC_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define SRV_10_ADC_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define SRV_10_ADC_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define SRV_10_ADC_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define SRV_10_ADC_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define SRV_10_ADC_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set SRV_11_PWM aliases
#define SRV_11_PWM_TRIS                 TRISDbits.TRISD1
#define SRV_11_PWM_LAT                  LATDbits.LATD1
#define SRV_11_PWM_PORT                 PORTDbits.RD1
#define SRV_11_PWM_WPU                  WPUDbits.WPUD1
#define SRV_11_PWM_OD                   ODCONDbits.ODCD1
#define SRV_11_PWM_ANS                  ANSELDbits.ANSD1
#define SRV_11_PWM_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define SRV_11_PWM_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define SRV_11_PWM_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define SRV_11_PWM_GetValue()           PORTDbits.RD1
#define SRV_11_PWM_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define SRV_11_PWM_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define SRV_11_PWM_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define SRV_11_PWM_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define SRV_11_PWM_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define SRV_11_PWM_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define SRV_11_PWM_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define SRV_11_PWM_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set SRV_11_ADC aliases
#define SRV_11_ADC_TRIS                 TRISDbits.TRISD2
#define SRV_11_ADC_LAT                  LATDbits.LATD2
#define SRV_11_ADC_PORT                 PORTDbits.RD2
#define SRV_11_ADC_WPU                  WPUDbits.WPUD2
#define SRV_11_ADC_OD                   ODCONDbits.ODCD2
#define SRV_11_ADC_ANS                  ANSELDbits.ANSD2
#define SRV_11_ADC_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define SRV_11_ADC_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define SRV_11_ADC_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define SRV_11_ADC_GetValue()           PORTDbits.RD2
#define SRV_11_ADC_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define SRV_11_ADC_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define SRV_11_ADC_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define SRV_11_ADC_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define SRV_11_ADC_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define SRV_11_ADC_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define SRV_11_ADC_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define SRV_11_ADC_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set SRV_12_PWM aliases
#define SRV_12_PWM_TRIS                 TRISDbits.TRISD3
#define SRV_12_PWM_LAT                  LATDbits.LATD3
#define SRV_12_PWM_PORT                 PORTDbits.RD3
#define SRV_12_PWM_WPU                  WPUDbits.WPUD3
#define SRV_12_PWM_OD                   ODCONDbits.ODCD3
#define SRV_12_PWM_ANS                  ANSELDbits.ANSD3
#define SRV_12_PWM_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define SRV_12_PWM_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define SRV_12_PWM_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define SRV_12_PWM_GetValue()           PORTDbits.RD3
#define SRV_12_PWM_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define SRV_12_PWM_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define SRV_12_PWM_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define SRV_12_PWM_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define SRV_12_PWM_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define SRV_12_PWM_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define SRV_12_PWM_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define SRV_12_PWM_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set SRV_7_PWM aliases
#define SRV_7_PWM_TRIS                 TRISDbits.TRISD4
#define SRV_7_PWM_LAT                  LATDbits.LATD4
#define SRV_7_PWM_PORT                 PORTDbits.RD4
#define SRV_7_PWM_WPU                  WPUDbits.WPUD4
#define SRV_7_PWM_OD                   ODCONDbits.ODCD4
#define SRV_7_PWM_ANS                  ANSELDbits.ANSD4
#define SRV_7_PWM_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define SRV_7_PWM_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define SRV_7_PWM_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define SRV_7_PWM_GetValue()           PORTDbits.RD4
#define SRV_7_PWM_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define SRV_7_PWM_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define SRV_7_PWM_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define SRV_7_PWM_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define SRV_7_PWM_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define SRV_7_PWM_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define SRV_7_PWM_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define SRV_7_PWM_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set SRV_8_ADC aliases
#define SRV_8_ADC_TRIS                 TRISDbits.TRISD5
#define SRV_8_ADC_LAT                  LATDbits.LATD5
#define SRV_8_ADC_PORT                 PORTDbits.RD5
#define SRV_8_ADC_WPU                  WPUDbits.WPUD5
#define SRV_8_ADC_OD                   ODCONDbits.ODCD5
#define SRV_8_ADC_ANS                  ANSELDbits.ANSD5
#define SRV_8_ADC_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define SRV_8_ADC_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define SRV_8_ADC_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define SRV_8_ADC_GetValue()           PORTDbits.RD5
#define SRV_8_ADC_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define SRV_8_ADC_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define SRV_8_ADC_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define SRV_8_ADC_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define SRV_8_ADC_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define SRV_8_ADC_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define SRV_8_ADC_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define SRV_8_ADC_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set SRV_8_PWM aliases
#define SRV_8_PWM_TRIS                 TRISDbits.TRISD6
#define SRV_8_PWM_LAT                  LATDbits.LATD6
#define SRV_8_PWM_PORT                 PORTDbits.RD6
#define SRV_8_PWM_WPU                  WPUDbits.WPUD6
#define SRV_8_PWM_OD                   ODCONDbits.ODCD6
#define SRV_8_PWM_ANS                  ANSELDbits.ANSD6
#define SRV_8_PWM_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define SRV_8_PWM_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define SRV_8_PWM_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define SRV_8_PWM_GetValue()           PORTDbits.RD6
#define SRV_8_PWM_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define SRV_8_PWM_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define SRV_8_PWM_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define SRV_8_PWM_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define SRV_8_PWM_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define SRV_8_PWM_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define SRV_8_PWM_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define SRV_8_PWM_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set SRV_9_ADC aliases
#define SRV_9_ADC_TRIS                 TRISDbits.TRISD7
#define SRV_9_ADC_LAT                  LATDbits.LATD7
#define SRV_9_ADC_PORT                 PORTDbits.RD7
#define SRV_9_ADC_WPU                  WPUDbits.WPUD7
#define SRV_9_ADC_OD                   ODCONDbits.ODCD7
#define SRV_9_ADC_ANS                  ANSELDbits.ANSD7
#define SRV_9_ADC_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define SRV_9_ADC_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define SRV_9_ADC_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define SRV_9_ADC_GetValue()           PORTDbits.RD7
#define SRV_9_ADC_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define SRV_9_ADC_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define SRV_9_ADC_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define SRV_9_ADC_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define SRV_9_ADC_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define SRV_9_ADC_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define SRV_9_ADC_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define SRV_9_ADC_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set SOL_1 aliases
#define SOL_1_TRIS                 TRISEbits.TRISE0
#define SOL_1_LAT                  LATEbits.LATE0
#define SOL_1_PORT                 PORTEbits.RE0
#define SOL_1_WPU                  WPUEbits.WPUE0
#define SOL_1_OD                   ODCONEbits.ODCE0
#define SOL_1_ANS                  ANSELEbits.ANSE0
#define SOL_1_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define SOL_1_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define SOL_1_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define SOL_1_GetValue()           PORTEbits.RE0
#define SOL_1_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define SOL_1_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define SOL_1_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define SOL_1_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define SOL_1_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define SOL_1_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define SOL_1_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define SOL_1_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set SOL_2 aliases
#define SOL_2_TRIS                 TRISEbits.TRISE1
#define SOL_2_LAT                  LATEbits.LATE1
#define SOL_2_PORT                 PORTEbits.RE1
#define SOL_2_WPU                  WPUEbits.WPUE1
#define SOL_2_OD                   ODCONEbits.ODCE1
#define SOL_2_ANS                  ANSELEbits.ANSE1
#define SOL_2_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define SOL_2_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define SOL_2_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define SOL_2_GetValue()           PORTEbits.RE1
#define SOL_2_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define SOL_2_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define SOL_2_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define SOL_2_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define SOL_2_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define SOL_2_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define SOL_2_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define SOL_2_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set SRV_4_ADC aliases
#define SRV_4_ADC_TRIS                 TRISEbits.TRISE2
#define SRV_4_ADC_LAT                  LATEbits.LATE2
#define SRV_4_ADC_PORT                 PORTEbits.RE2
#define SRV_4_ADC_WPU                  WPUEbits.WPUE2
#define SRV_4_ADC_OD                   ODCONEbits.ODCE2
#define SRV_4_ADC_ANS                  ANSELEbits.ANSE2
#define SRV_4_ADC_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define SRV_4_ADC_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define SRV_4_ADC_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define SRV_4_ADC_GetValue()           PORTEbits.RE2
#define SRV_4_ADC_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define SRV_4_ADC_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define SRV_4_ADC_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define SRV_4_ADC_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define SRV_4_ADC_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define SRV_4_ADC_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define SRV_4_ADC_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define SRV_4_ADC_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/