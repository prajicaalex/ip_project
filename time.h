#ifndef CONVERTOR_TIME_H
#define CONVERTOR_TIME_H

#include "helper.h"

struct time {
    // this measures correspond to the ones from ariaUnits (same exact order)
    const double unitToMinutes[10] = {
            0.0166667,
            1,
            60,
            1440,
            10080,
            43800.1356,
            525601,
            1.6667e-11,
            1.6667e-8,
            1.6667e-5
    };
};

struct timeUnits {
    const string units[10] = {
            "s",
            "m",
            "h",
            "days",
            "weeks",
            "months",
            "years",
            "nanosecond",
            "microsecond",
            "millisecond"
    };

    const int nrOfUnits = 10;
};

void showTimeUnitOptions();
void showTimeMenu(int STEP);
void showTimeResult();

#endif
