#include "fatigue_calc.h"

float calculateFatigue(float current, float max) {
    if (max == 0) return 0;
    float drop = ((max - current) /max ) * 100.0;
    return (drop < 0) ? 0 : drop;
    // If drop < 0, return 0. Otherwise, return drop.
}