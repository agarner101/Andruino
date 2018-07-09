/*
   Ambient Temperature Sensor

   Using a TMP36 analog temperature sensor

   By Andrew Garner July 5, 2018
*/

//Using A0
int sensorPin = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int reading = analogRead(sensorPin);

  float voltage = reading * 5.0;
  voltage /= 1024.0;

  Serial.print(voltage);
  Serial.println(" volts");

  //converting from 10 mv per degree with 500 mV offset
  //to degrees ((voltage - 500mV) times 100)
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print(temperatureC);
  Serial.println(" degrees C");

  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF);
  Serial.println(" degrees F");

  Serial.println("-------");
  
  delay(2000);
}
