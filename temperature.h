#ifndef CONVERTOR_TEMPERATURE_H
#define CONVERTOR_TEMPERATURE_H

#include "helper.h"

struct temperature {
    const double unitToCelsius[4] = {
            1,
            -17.2222222,
            -272.15,
            -272.59444
    };
};

struct temperatureUnits {
    const string units[4] = {
            "C",
            "F",
            "K",
            "R"
    };

    const int nrOfUnits = 4;
};

void showTemperatureMenu(int STEP);
void showTemperatureResult();

#endif //CONVERTOR_TEMPERATURE_H
