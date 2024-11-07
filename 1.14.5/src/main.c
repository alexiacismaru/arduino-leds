#include <util/delay.h>
#include <avr/io.h>
#include <usart.h>
#include <stdio.h>
#include <time.h>

int array[10];

int main(){
  DDRB = 0b00100000; 
  srand(time(0)); 

  for(int i = 0; i < sizeof(array); i++){
    int randomLed = rand() % 4;
    PORTB = (0 << (PB2 + randomLed));  
  }
}