#include <stdio.h>

#define LED_LIGHTS 4

void enableOneLed(int led) {};
void enableMultipleLeds (uint8_t leds) {}; /* enables any combination of the 4 leds at once. function receives a byte (8 bit value) 
                                              if I enter 0b00001101, the 0-th, the 2nd and the 3rd led will be enabled for writing. 
                                              if I enter 0b00000110, the 1st and 2nd led will be enabled */
void enableAllLeds();
void lightUpOneLed(int led) {};
void lightUpMultipleLeds(uint8_t leds) {};
void lightUpAllLeds() {};
void lightDownOneLed(int led) {};
void lightDownMultipleLeds (uint8_t leds) {};
void lightDownAllLeds() {};
void lightToggleOneLed(int led) {};