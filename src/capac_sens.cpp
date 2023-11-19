#include <Arduino.h>

void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  int sensor0Val = analogRead(A0);
  int sensor1Val = analogRead(A1);
  int sensor2Val = analogRead(A2);
  int sensor3Val = analogRead(A3);

  Serial.print("Sensor 0 Value: ");
  Serial.print(sensor0Val);
  Serial.print(" ");
  Serial.print("Sensor 1 Value: ");
  Serial.print(sensor1Val);
  Serial.print(" ");
  Serial.print("Sensor 2 Value: ");
  Serial.print(sensor2Val);
  Serial.print(" ");
  Serial.print("Sensor 3 Value: ");
  Serial.print(sensor3Val);
  Serial.println();  // Add a line break for formatting

  delay(10000);
}
