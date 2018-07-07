/**
 * Soil Moisture Sensor
 * Simply logs value of moisture sensor, for testing and calibration purposes
 * 
 * Using:
 * Sparkfun Soil Moisture Sensor
 * Arduino Uno R3
 * 
 * Andrew Garner
 * July 7, 2018
 */

#define SOIL_DATA_PIN A0
#define SOIL_POWER_PIN 7

void setup() {
  Serial.begin(9600);

  //Sensor is powered by pin as to not continually use. This preserves life of sensor
  pinMode(SOIL_POWER_PIN, OUTPUT);
  //turn off power to sensor to begin
  digitalWrite(SOIL_POWER_PIN, LOW); 

}

void loop() {
  Serial.print("Soil Moisture: ");
  Serial.println(readSoil());
  //for testing purposes take a reading every 1 second
  //for actual use, poll less frequently to preserve life of sensor
  delay(1000);
}

/**
 * Returns value of moisture sensor
 */
int readSoil() {
  //power sensor
  digitalWrite(SOIL_POWER_PIN, HIGH);
  //delay before taking reading
  delay(10);
  int result = analogRead(SOIL_DATA_PIN);
  //turn off power to sensor
  digitalWrite(SOIL_POWER_PIN, LOW);
  return result;
}

