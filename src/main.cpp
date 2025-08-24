// This file controls the overall program flow:
// - Sets up everything
// - Waits for user input to choose a test
// - Runs the selected test loop

#include <Arduino.h>
#include "grip_sensor.h"     // Grip strength reading and test loop
#include "fatigue_calc.h"    // Fatigue calculation logic
#include "pinky_test.h"      // Pinky test reading and loop

int mode = 0; // Tracks which test we're running: 0 = grip, 1 = pinky

void setup() {
  Serial.begin(115200); // Starts Serial Monitor to show results

  // TODO: Set up grip sensor (e.g., set analog resolution, pins)
  // TODO: Set up pinky sensor (on different analog pin)

  // Optional: Display or print message telling user what to type
}

void loop() {
  // TODO: Check if user typed 'g' or 'p' in Serial Monitor
  // - If 'g': set mode to grip test
  // - If 'p': set mode to pinky test

  // TODO: Run the test based on mode
  // - If mode == 0, run grip test loop
  // - If mode == 1, run pinky test loop

  // Optional: delay(10) to prevent overload
}
