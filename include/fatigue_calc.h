#pragma once

// Purpose: This file calculates muscle fatigue
// Fatigue = % drop from maximum force during the test

// TODO: Input = current force + highest force so far
// TODO: Output = % drop (fatigue value to display/log)
float calculateFatigue(float currentForce, float maxForce);
