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

// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO_RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.WPUC6
#define IO_RC6_OD                   ODCONCbits.ODCC6
#define IO_RC6_ANS                  ANSELCbits.ANSC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

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

// get/set IO_RE0 aliases
#define IO_RE0_TRIS                 TRISEbits.TRISE0
#define IO_RE0_LAT                  LATEbits.LATE0
#define IO_RE0_PORT                 PORTEbits.RE0
#define IO_RE0_WPU                  WPUEbits.WPUE0
#define IO_RE0_OD                   ODCONEbits.ODCE0
#define IO_RE0_ANS                  ANSELEbits.ANSE0
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define IO_RE0_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define IO_RE0_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define IO_RE0_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define IO_RE0_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define IO_RE0_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set IO_RE1 aliases
#define IO_RE1_TRIS                 TRISEbits.TRISE1
#define IO_RE1_LAT                  LATEbits.LATE1
#define IO_RE1_PORT                 PORTEbits.RE1
#define IO_RE1_WPU                  WPUEbits.WPUE1
#define IO_RE1_OD                   ODCONEbits.ODCE1
#define IO_RE1_ANS                  ANSELEbits.ANSE1
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_RE1_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_RE1_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_RE1_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_RE1_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_RE1_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

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