#include <Arduino.h>

// Pumps are designed with reverse logic:
// LOW -> Pump is turned on
// HIGH -> Pump is turned off

int IN1 = 2;
int IN2 = 3;
int IN3 = 4;  // Add two more pins
int IN4 = 5;

void setup() 
{
    Serial.begin(9600);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);  // Initialize the new pins
    pinMode(IN4, OUTPUT);

    // Turn off all pumps initially
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
}

void loop() 
{
    // Pump 1
    digitalWrite(IN1, LOW);
    delay(1000);
    digitalWrite(IN1, HIGH);
    delay(5000);

    // Pump 2
    digitalWrite(IN2, LOW);
    delay(1000);
    digitalWrite(IN2, HIGH);
    delay(5000);

    // Pump 3
    digitalWrite(IN3, LOW);
    delay(1000);
    digitalWrite(IN3, HIGH);
    delay(5000);

    // Pump 4
    digitalWrite(IN4, LOW);
    delay(1000);
    digitalWrite(IN4, HIGH);
    delay(5000);
}
