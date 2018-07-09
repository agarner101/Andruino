/*
   LED Blink

   Turns on built-in LED for a moment, then off for a moment. Repeats.

   By Andrew Garner July 3, 2018
*/
void setup() {
  //Init Built in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //Turn ON
  digitalWrite(LED_BUILTIN, HIGH);
  // Delay for 500 milliseconds
  delay(500);
  //Turn OFF
  digitalWrite(LED_BUILTIN, LOW);
  //Delay for 500 milliseconds
  delay(500);
}
