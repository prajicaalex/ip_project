#include "energy.h"


void showEnergyUnitOptions() {
    energyUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getEnergyResult(){
    energy energy;

    double factorFrom = energy.unitsToJoule[unit.option1 - 1];
    double factorTo = energy.unitsToJoule[unit.option2 - 1];

    double kg = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(kg, factorTo);

    return converted;
}

void showEnergyResult(){
    energyUnits energyUnits;
    double result = getEnergyResult();
    double amount = unit.amount;

    showUnitResult(energyUnits.units[unit.option1 - 1], energyUnits.units[unit.option2 - 1], amount, result);
}

void showEnergyMenu(int STEP) {
    showConvertMessage(STEP);
    showEnergyUnitOptions();
}