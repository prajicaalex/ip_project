#include "mass.h"


void showMassUnitOptions() {
    massUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getMassResults(){
    mass mass;

    double factorFrom = mass.unitToKiloGram[unit.option1 - 1];
    double factorTo = mass.unitToKiloGram[unit.option2 - 1];

    double kg = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(kg, factorTo);

    return converted;
}

void showMassResult(){
    massUnits temperatureUnits;
    double result = getMassResults();
    double amount = unit.amount;

    showUnitResult(temperatureUnits.units[unit.option1 - 1], temperatureUnits.units[unit.option2 - 1], amount, result);
}

void showMassMenu(int STEP) {
    showConvertMessage(STEP);
    showMassUnitOptions();
}