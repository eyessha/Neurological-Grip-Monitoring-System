#include "grip_sensor.h"
#include "fatigue_calc.h"
#include <HX711.h> 

#define GRIP_DOUT 0     // HX711 data pin
#define GRIP_SCK  1     // HX711 clock pin 

HX711 gripScale;


void initGripSensor() {
   gripScale.begin(GRIP_DOUT, GRIP_SCK);    // Connect HX711
   gripScale.set_scale();                   // Set after calibration 
   gripScale.tare();                        // Set zero refrence 
}

float readGripForce(){
   if(gripScale.is_ready())   {             
return gripScale.get_units(1);              // Read one averaged value 
   } else {
    return 0;                                // If not ready, return 0
   }              
   
}

void runGripTest() {
    unsigned long startTime = millis();
    unsigned long duration = 10000;            // 10 seconds

    float maxForce = 0;
    float currentForce = 0;

    while (millis() - startTime < duration) {
        currentForce = readGripForce();
        if (currentForce > maxForce) maxForce = currentForce;

        float fatigue = calculateFatigue(currentForce, maxForce);

        Serial.print("Current: ");
        Serial.print(currentForce);
        Serial.print(" | Max: ");
        Serial.print(maxForce);
        Serial.print(" | Fatigue: ");
        Serial.print(fatigue);
        Serial.println(" %");

        delay(100);                         // Sample ~10x per second

    }

    Serial.println(" Grip test complete.");
    Serial.print(" Final Max Force: ");
    Serial.println(maxForce);
}