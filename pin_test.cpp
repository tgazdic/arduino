#include <Arduino.h>

const int digitalPin = 2;  // Use digital pin 2
const int analogPin = A5; // Use analog pin A0

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(digitalPin, OUTPUT); // Set the digital pin as OUTPUT
}

void loop() {
  // Produce a digital signal (HIGH or LOW) on the specified digital pin
  digitalWrite(digitalPin, HIGH);
  delay(1000); // Wait for a moment

  // Read the analog value from the specified analog pin
  int analogValue = analogRead(analogPin);

  // Print the analog value to the serial monitor
  Serial.print("Analog Value when Digital Pin is HIGH: ");
  Serial.println(analogValue);

  delay(1000); // Wait for a moment

  // Produce a different digital signal (LOW)
  digitalWrite(digitalPin, LOW);
  delay(1000); // Wait for a moment

  // Read the analog value again
  analogValue = analogRead(analogPin);

  // Print the analog value to the serial monitor
  Serial.print("Analog Value when Digital Pin is LOW: ");
  Serial.println(analogValue);

  delay(1000); // Wait for a moment
}
