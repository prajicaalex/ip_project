#ifndef CONVERTOR_DENSITY_H
#define CONVERTOR_DENSITY_H

#include "helper.h"

struct density {
    const double unitsToKgM3[6] = {
            1000,
            1,
            0.001,
            1000,
            1,
            1000
    };
};

struct densityUnits {
    const string units[6] = {
            "g/cm3",
            "g/l",
            "g/m3",
            "kg/l",
            "kg/m3",
            "t/m3"

    };

    const int nrOfUnits = 6;
};

void showDensityMenu(int STEP);
void showDensityResult();
void showDensityUnitOptions();
double getDensityResult();

#endif //CONVERTOR_DENSITY_H
