#ifndef CONVERTOR_ENERGY_H
#define CONVERTOR_ENERGY_H

#include "helper.h"

struct energy {
    const double unitsToJoule[18] = {
            1055.06,
            4.1868,
            0.0000001,
            1.3558179483314,
            0.11298482902,
            1,
            4186.8,
            1000,
            3600000,
            1055.06e15,
            29307600000,
            29307600000,
            29307600000,
            41868000000,
            41868000000,
            4186800,
            3600,
            1
    };
};

struct energyUnits {
    const string units[18] = {
            "Btu",
            "cal",
            "erg",
            "ft·lbf",
            "in·lbf",
            "J",
            "kcal",
            "kJ",
            "kW·h",
            "quad Btu",
            "tcc",
            "tce",
            "tec",
            "tep",
            "toe",
            "th",
            "W·h",
            "W·s"
    };

    const int nrOfUnits = 18;
};

void showEnergyMenu(int STEP);
void showEnergyResult();

#endif //CONVERTOR_ENERGY_H
