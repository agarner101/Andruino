/**
   Header Example

   Shows usage of .h header file

   Andrew Garner
   July 8, 2018
*/

#include "LED.h"

LED led = LED(LED_BUILTIN);

void setup() {
  led.turnOff();
}

void loop() {
  led.turnOn();
  delay(500);
  led.turnOff();
  delay(500);
}
