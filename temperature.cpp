#include "temperature.h"


void showTemperatureUnitOptions() {
    temperatureUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getTemperatureResults(){
    temperature temperature;

    double factorFrom = temperature.unitToCelsius[unit.option1 - 1];
    double factorTo = temperature.unitToCelsius[unit.option2 - 1];

    double celsius = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(celsius, factorTo);

    return converted;
}

void showTemperatureResult(){
    temperatureUnits temperatureUnits;
    double result = getTemperatureResults();
    double amount = unit.amount;

    showUnitResult(temperatureUnits.units[unit.option1 - 1], temperatureUnits.units[unit.option2 - 1], amount, result);
}

void showTemperatureMenu(int STEP) {
    showConvertMessage(STEP);
    showTemperatureUnitOptions();
}