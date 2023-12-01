#include <Arduino.h>

int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

void setup() 
{
    Serial.begin(9600);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    delay(500);
}

void loop() 
{
    digitalWrite(IN1, HIGH);
    delay(500);
    digitalWrite(IN1, LOW);

    delay(10000);

    digitalWrite(IN2, HIGH);
    delay(500);
    digitalWrite(IN2, LOW);

    delay(10000);

    digitalWrite(IN3, HIGH);
    delay(500);
    digitalWrite(IN3, LOW);

    delay(10000);

    digitalWrite(IN4, HIGH);
    delay(500);
    digitalWrite(IN4, LOW);

    delay(10000);
}
