#ifndef CONVERTOR_SPEED_H
#define CONVERTOR_SPEED_H

#include "helper.h"

struct speed {
    // this measures correspond to the ones from ariaUnits (same exact order)
    const double unitToKmh[3] = {
            1,
            1.60934,
            3.6
    };
};

struct speedUnits {
    const string units[3] = {
            "kmh",
            "mph",
            "m/s",
    };

    const int nrOfUnits = 3;
};

void showSpeedMenu(int STEP);
void showSpeedResult();


#endif //CONVERTOR_SPEED_H
