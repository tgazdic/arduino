#include <Arduino.h>

// Pumps are designed with reverse logic:
// LOW -> Pump is turned on
// HIGH -> Pump is turned off

// desired pumped volumes [ml]
int pump_1_vol = 70;
int pump_2_vol = 70;
int pump_3_vol = 70;
int pump_4_vol = 1;

// pump-pin connections
int pump_1 = 2;
int pump_2 = 3;
int pump_3 = 4;
int pump_4 = 5;

// pump characteristics from data
float pump_1_mlps = 15.9375;
float pump_2_mlps = 9.832744952310168;
float pump_3_mlps = 22.222222222222225;
float pump_4_mlps = 18.67063492063492;

void setup() 
{
    Serial.begin(9600);
    pinMode(pump_1, OUTPUT);
    pinMode(pump_2, OUTPUT);
    pinMode(pump_3, OUTPUT);  // Initialize the new pins
    pinMode(pump_4, OUTPUT);

    // Turn off all pumps initially
    digitalWrite(pump_1, HIGH);
    digitalWrite(pump_2, HIGH);
    digitalWrite(pump_3, HIGH);
    digitalWrite(pump_4, HIGH);
}

void loop() 
{
    // Pump 1
    digitalWrite(pump_1, LOW);
    delay(pump_1_vol/pump_1_mlps);
    digitalWrite(pump_1, HIGH);
    delay(5000);

    // Pump 2
    digitalWrite(pump_2, LOW);
    delay((pump_2_vol/pump_2_mlps)*1000);
    digitalWrite(pump_2, HIGH);
    delay(5000);

    // Pump 3
    digitalWrite(pump_3, LOW);
    delay((pump_3_vol/pump_3_mlps)*1000);
    digitalWrite(pump_3, HIGH);
    delay(5000);

    // Pump 4
    digitalWrite(pump_4, LOW);
    delay((pump_4_vol/pump_4_mlps)*1000);
    digitalWrite(pump_4, HIGH);
    delay(5000);
}
