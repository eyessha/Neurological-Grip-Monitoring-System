#pragma once

// Purpose: This file handles the grip strength test
// - Setup code for grip sensor
// - Reads force values
// - Runs the test and calculates fatigue

// TODO: Set up ADC resolution and pinMode for grip sensor
void initGripSensor();

// TODO: Read and return raw or scaled grip force value
float readGripForce();

// TODO: Run grip test loop:
// - Record force over time
// - Find maximum force
// - Calculate fatigue %
void runGripTest();
