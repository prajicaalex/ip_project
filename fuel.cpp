#include "fuel.h"


void showFuelUnitOptions() {
    fuelUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getFuelResult(){
    fuel fuel;

    double factorFrom = fuel.unitsToLiters100Km[unit.option1 - 1];
    double factorTo = fuel.unitsToLiters100Km[unit.option2 - 1];

    double kg = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(kg, factorTo);

    return converted;
}

void showFuelResult(){
    fuelUnits fuelUnits;
    double result = getFuelResult();
    double amount = unit.amount;

    showUnitResult(fuelUnits.units[unit.option1 - 1], fuelUnits.units[unit.option2 - 1], amount, result);
}

void showFuelMenu(int STEP) {
    showConvertMessage(STEP);
    showFuelUnitOptions();
}