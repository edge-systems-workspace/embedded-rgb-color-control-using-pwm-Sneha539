#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Sneha Singh
 * @date 2026-02-27
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
void setup() {

    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    Serial.println("RGB LED Control System Initialized...");
}

void loop() {

    digitalWrite(redPin, HIGH);
    delay(1000);
    digitalWrite(redPin, LOW);
    delay(500);

    analogWrite(redPin, 255);   // Full red
    analogWrite(greenPin, 100); // Medium green
    analogWrite(bluePin, 50);   // Low blue

    delay(2000);
}
