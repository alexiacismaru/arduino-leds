#include <avr/io.h>
#include <stdio.h>
#include <led_library.h>


void enableOneLed(int led) {
    if ( led < 0 || led > LED_LIGHTS - 1 ) return;
    DDRB |= ( 1 << ( PB2 + led ));
}

void enableMultipleLeds (uint8_t leds) {
    for(leds = 0b00000000; leds < 0b00010000; leds++) {
        DDRB |= (1 << (PB2 + leds));
    }
}

void enableAllLeds() {
    DDRB |= (1 << PB2 + LED_LIGHTS);
}

void lightUpOneLed(int led) {
    if ( led < 0 || led > LED_LIGHTS-1) return;
    PORTB &= ~( 1 << ( PB2 + led ));
}

void lightUpMultipleLeds(uint8_t leds){
    for(leds = 0b00000000; leds < 0b00010000; leds++) {
        DDRB &= ~(1 << (PB2 + leds));
    }
}

void lightUpAllLeds() {
    DDRB &= ~(1 << PB2 + LED_LIGHTS);
}

void lightDownOneLed ( int led ) {
    if ( led < 0 || led > LED_LIGHTS - 1 ) return;
    PORTB |= (1 << ( PB2 + led ));   
}

void lightDownMultipleLeds (uint8_t leds) {
    for(leds = 0b00000000; leds < 0b00010000; leds++) {
        PORTB |= (1 << ( PB2 + leds )); 
    }
}

void lightDownAllLeds() {
    PORTB |= (1 << PB2 + LED_LIGHTS);
}

void lightToggleOneLed(int led) {
    if(DDRB |= ( 1 << ( PB2 + led ))) PORTB &= ~( 1 << ( PB2 + led ));
} //turn off led if it's on