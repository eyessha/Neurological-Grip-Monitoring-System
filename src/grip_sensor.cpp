#include "grip_sensor.h"
#include <HX711.h> // HX711 library 

// Sets up the grip sensor (ADC pin, resolution )
void initGripSensor() {
    // TOFO: Set up ADC resolution 
    // TODO: Set up the analog pin mode (if needed)
}

// Reads the current grip force value
float readGripForce() {
    // TODO: Read analog input 
    // TODO: Convert to force (optional)
    return 0;
}

// Handles the first full grip test loop
void runGripTest() {
    // TODO: Start timer 
    // TODO: Read and log force values 
    // TODO: Track max force 
    // TODO: Calculate fatigue 
    // TODO: ENd after 10s (or button)
}