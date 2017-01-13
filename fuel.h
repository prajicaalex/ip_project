#ifndef CONVERTOR_FUEL_H
#define CONVERTOR_FUEL_H

#include "helper.h"

struct fuel {
    const double unitsToLiters100Km[3] = {
            1,
            235.2145833,
            100
    };
};

struct fuelUnits {
    const string units[3] = {
            "liters/100km",
            "miles/gallon",
            "km/liter"
    };

    const int nrOfUnits = 3;
};

void showFuelMenu(int STEP);
void showFuelResult();
void showFuelUnitOptions();
double getFuelResult();


#endif //CONVERTOR_FUEL_H
