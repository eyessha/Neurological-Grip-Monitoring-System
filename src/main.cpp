#include <Arduino.h>
#include "grip_sensor.h"
#include "fatigue_calc.h"
#include "pinky_test.h"

void setup() {
  Serial.begin(115200);     // Start serial output
  initGripSensor();         // Set up grip load cell
  initPinkySensor();        // Placeholder init
  Serial.println("Type g for grip test, 'p' for pinky test");
}
  
void loop() {
  if (Serial.available(){
    char c = Serial.read(); // Get character from Serial Monitor 
    if (c == 'g') {
      Serial.println("Starting grip test...");
      runGripTest();
    } else if (c == 'p') {
      Serial.println("Pinky test not yet implemented");
      runPinkyTest();
    }
  })

}