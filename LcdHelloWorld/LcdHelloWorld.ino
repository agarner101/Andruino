/**
   Simple Hello World sketch for LCD

   Using:
   SparkFun Serial LCD
   Arduino UNO R3

   Andrew Garner
   July 8, 2018
*/

#include <SoftwareSerial.h>

// Attach the serial enabled LCD's RX line to digital pin 11
SoftwareSerial LCD(10, 11); // Arduino SS_RX = pin 10 (unused), Arduino SS_TX = pin 11

void setup() {
  LCD.begin(9600); // set up serial port for 9600 baud
  delay(500); // wait for display to boot up
}

void loop() {
  //Clear display
  LCD.write(0xFE);
  LCD.write(0x01);

  //Move cursor to the beginning of the first line
  LCD.write(0xFE);
  LCD.write(0x80);

  LCD.write("Hello, World!");

//Uncomment below to set as splash screen
//  LCD.write(0x7C);
//  LCD.write(0x0A);

  //Prevent loop from continuing.
  while (1);

}
