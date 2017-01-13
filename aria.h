#ifndef CONVERTOR_ARIA_H
#define CONVERTOR_ARIA_H

#include "helper.h"

struct aria {
    // this measures correspond to the ones from ariaUnits (same exact order)
    const double unitToMeterSquare[10] = {
            100,
            4046.85,
            0.0001,
            0.0929,
            10000,
            0.0006452,
            1000000,
            1,
            0.000001,
            0.83
    };
};

struct ariaUnits {
    const string units[10] = {
            "a",
            "ac",
            "cm2",
            "ft2",
            "ha",
            "in2",
            "km2",
            "m2",
            "mm2",
            "yd2"
    };

    const int nrOfUnits = 10;
};

void showAriaMenu(int STEP);
void showAriaResult();

#endif
