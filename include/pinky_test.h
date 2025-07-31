#pragma once

// Purpose: This file handles the pinky abduction test
// - Measures how strong the pinky can push sideways
// - Tracks max force
// (useful for ulnar nerve monitoring)

// TODO: Set up pinky sensor (analog pin for FSR or similar)
void initPinkySensor();

// TODO: Run pinky test loop:
// - Record pinky force for a few seconds
// - Track max force
// - Print or log result
void runPinkyTest();
