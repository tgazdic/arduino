#include <Arduino.h>

int IN1 = 5;

void setup() 
{
    Serial.begin(9600);
    pinMode(IN1, OUTPUT);
    digitalWrite(IN1, HIGH);
    delay(5000); // so it does not start spilling immediately

}

void loop() 
{
    digitalWrite(IN1, LOW);
    delay(2000);
    digitalWrite(IN1, HIGH);
    delay(10000);
}
