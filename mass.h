#ifndef CONVERTOR_MASS_H
#define CONVERTOR_MASS_H

#include "helper.h"

struct mass {
    const double unitToKiloGram[8] = {
            0.001,
            1,
            0.453592,
            0.000001,
            0.0283495,
            0.0311035,
            14.593903,
            1000,
    };
};

struct massUnits {
    const string units[8] = {
            "g",
            "Kg",
            "livre",
            "mg",
            "Oz *Oprit",
            "Oz *Troy",
            "melc",
            "t",
    };

    const int nrOfUnits = 8;
};

void showMassMenu(int STEP);
void showMassResult();

#endif //CONVERTOR_MASS_H
