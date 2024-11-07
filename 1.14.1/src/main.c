#include <Arduino.h>
#define __DELAY_BACKWARD_COMPATIBLE__  
#include <util/delay.h>
#include <LEDlibrary.h>
#include <avr/io.h>

#define NUMBER_OF_LEDS 4  

void enableLed ( int lednumber ) {  
    if ( lednumber < 0 || lednumber > NUMBER_OF_LEDS-1 ) return;  
    DDRB |= ( 1 << ( PB2 + lednumber ));  
}

void lightUpLed ( int lednumber ) {  
    if ( lednumber < 0 || lednumber > NUMBER_OF_LEDS-1 ) return;
    PORTB &= ~( 1 << ( PB2 + lednumber ));  
}

void lightDownLed ( int lednumber ) {
    if ( lednumber < 0 || lednumber > 3 ) return;
    PORTB |= ( 1 << ( PB2 + lednumber ));   
} 

//light 4 LEDS consecutively
int main() { 
    while(1){
        for ( int i = 0; i < 1; i++ ) { 
            enableLed(i);  
        }
    
        for(int i = 0; i < 1; i++){
            lightUpLed(i);
            _delay_ms(1000);
        }

        for ( int i = 0; i < 2; i++ ) { 
            enableLed(i);  
        }

        for(int i = 0; i < 2; i++){
            lightUpLed(i);
            _delay_ms(1000);
        }

        for ( int i = 0; i < 3; i++ ) { 
            enableLed(i);  
        }

        for(int i = 0; i < 3; i++){
            lightUpLed(i);
            _delay_ms(1000);
        }

        for ( int i = 0; i < 4; i++ ) { 
            enableLed(i);  
        }

        for(int i = 0; i < 4; i++){
            lightUpLed(i);
            _delay_ms(1000);
        }

        for(int i = 0; i < 4; i++){
            lightDownLed(i);
        }  
    }
}