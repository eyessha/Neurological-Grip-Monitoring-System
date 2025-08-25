#include "grip_sensor.h"
#include "fatigue_calc.h"
#include <HX711.h> 

#define GRIP_DOUT 0     // HX711 data pin
#define GRIP_SCK  1     // HX711 clock pin 

HX711 gripScale;


void initGripSensor() {
    // Connect HX711
    // Set after calibration 
    // Set zero refrence 
}

float readGripForce(){
    // Read one averaged value 
    // If not ready, return 0
}

void runGripTest() {
    
}