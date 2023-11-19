#include <Arduino.h>

int IN1 = 2;

void setup() 
{
    Serial.begin(9600);
    pinMode(IN1, OUTPUT);
    digitalWrite(IN1, LOW);
    delay(500);
}

void loop() 
{
    digitalWrite(IN1, HIGH);
    delay(10000);
    digitalWrite(IN1, LOW);
    delay(60000);
}
