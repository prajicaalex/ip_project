#include "density.h"


void showDensityUnitOptions() {
    densityUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getDensityResult(){
    density density;

    double factorFrom = density.unitsToKgM3[unit.option1 - 1];
    double factorTo = density.unitsToKgM3[unit.option2 - 1];

    double kg = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(kg, factorTo);

    return converted;
}

void showDensityResult(){
    densityUnits densityUnits;
    double result = getDensityResult();
    double amount = unit.amount;

    showUnitResult(densityUnits.units[unit.option1 - 1], densityUnits.units[unit.option2 - 1], amount, result);
}

void showDensityMenu(int STEP) {
    showConvertMessage(STEP);
    showDensityUnitOptions();
}