#include "pinky_test.h"
#include "fatigue_calc.h"
#include <HX711.h>

#define PINKY_DOUT 2    // HX711 data pin for pinky sensoe 
#define PINKY_SCK 3     // HX711 clock pin for pinky sensor 

HX711 pinkyScale;

void initPinkySensor() {
    pinkyScale.begin(PINKY_DOUT, PINKY_SCK);
    pinkyScale.set_scale();                     // Set after calibration
    pinkyScale.tare();                          // Set baseline

}

float readPinkyForce() {
    if(pinkyScale.is_ready()) {
        return pinkyScale.get_units(1);         // Read one sample
    } else {
        return 0;
    }
}

void runPinkyTest() {
    unsigned long start = millis();
    unsigned long duration = 10000;

    float maxForce = 0;
    float currentForce = 0;

    while (millis() - start < duration) {
        currentForce = readPinkyForce();
        if(currentForce > maxForce) maxForce = currentForce;

        float fatigue = calculateFatigue(currentForce, maxForce);

        Serial.print("Pinky Current: ");
        Serial.print(currentForce);
        Serial.print(" | Max: ");
        Serial.print(maxForce);
        Serial.print(" | Fatigue: ");
        Serial.print(fatigue);
        Serial.println(" %");

        delay(100);
    }

    Serial.println("Pinky test complete.");
    Serial.print("Final Max Pinky Force: ");
    Serial.println(maxForce);
}