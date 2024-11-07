#define __DELAY_BACKWARD_COMPATIBLE__  
#include <util/delay.h> 
#include <avr/io.h>  
#include <stdio.h>
 
void increment(volatile int* delay){
    *delay = *delay + 50;
}

int main()  
{
    DDRB = 0b00100000;  
    int delay;
    delay = 10;
    increment(&delay);


    for(int delay = 10; delay < 10000; delay++){
        PORTB = (0 << (PB2 + 3)); 
        _delay_ms(delay + 50); 
        PORTB = (1 << (PB2 + 3));  
        _delay_ms(1000);
    }
}