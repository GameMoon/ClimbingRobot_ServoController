#include "adc_controller.h"
#include "pwm_controller.h"

#include "mcc_generated_files/device_config.h"
#include "mcc_generated_files/adc.h"


void read_positions(){
    
    // Turn on the ADC module
     ADCON0bits.ADON = 1;
    
    for(uint8_t k = 0; k < NUMBER_OF_SERVOS; k++){
        ADCON0bits.CHS = servo_adc_channels[k];    
       
        // Acquisition time delay
        __delay_us(ACQ_US_DELAY_ADC);

        // Start the conversion
        ADCON0bits.GO = 1;

        // Wait for the conversion to finish
        while (ADCON0bits.GO)
        {
        }

        // Conversion finished, return the result*/
        servo_positions[k] = (ADRESH << 6) + (ADRESL >> 2);
    }
    
}
