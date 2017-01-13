#include "pressure.h"


void showPressureUnitOptions() {
    pressureUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getPressureResult(){
    pressure pressure;

    double factorFrom = pressure.unitsToBar[unit.option1 - 1];
    double factorTo = pressure.unitsToBar[unit.option2 - 1];

    double bar = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(bar, factorTo);

    return converted;
}

void showPressureResult(){
    pressureUnits pressureUnits;
    double result = getPressureResult();
    double amount = unit.amount;

    showUnitResult(pressureUnits.units[unit.option1 - 1], pressureUnits.units[unit.option2 - 1], amount, result);
}

void showPressureMenu(int STEP) {
    showConvertMessage(STEP);
    showPressureUnitOptions();
}