/*
   Ambient light sensor

   TEMT6000 Ambient Light Sensor

   by Andrew Garner July 5, 2018
*/

#define LIGHT_SENSOR_PIN A0 //Light Sensor
#define LED_PIN 11         //LED (PWM)

void setup() {
  pinMode(LIGHT_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Read light level
  float reading = analogRead(LIGHT_SENSOR_PIN);
  //Log reading
  Serial.println(reading);
  displayReading(reading);
  //Delay to make logging more readable.
  delay(400);
}

void displayReading(float reading) {
  float square_ratio = reading / 1023.0; //get percent of maximum value of sensor
  square_ratio = pow(square_ratio, 2.0); //square to make response more visible
  analogWrite(LED_PIN, 255.0 * square_ratio);
}

