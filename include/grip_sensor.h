#pragma once

// HX711 load cell setup + test runner fro grip strength 
void initGripSensor();      // Setup the load cell (pins, tare)
float readGripForce();      // Return curreny grip force (raw or scaled)
void runGripTest();         // RUN 10-second grip test with fatigue ouput
