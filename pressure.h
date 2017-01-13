#ifndef CONVERTOR_PRESSURE_H
#define CONVERTOR_PRESSURE_H

#include "helper.h"

struct pressure {
    const double unitsToBar[2] = {
            1,
            14.5038
    };
};

struct pressureUnits {
    const string units[2] = {
            "bar",
            "psi"
    };

    const int nrOfUnits = 2;
};

void showPressureMenu(int STEP);
void showPressureResult();
void showPressureUnitOptions();
double getPressureResult();

#endif //CONVERTOR_PRESSURE_H
