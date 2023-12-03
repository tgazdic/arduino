#include <Arduino.h>

int pump_1 = 5;

void setup() 
{
    Serial.begin(9600);
    pinMode(pump_1, OUTPUT);
    digitalWrite(pump_1, HIGH);
    delay(5000); // so it does not start spilling immediately

}

void loop() 
{
    digitalWrite(pump_1, LOW);
    delay(2000);
    digitalWrite(pump_1, HIGH);
    delay(10000);
}
