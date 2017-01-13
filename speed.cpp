#include "speed.h"


void showSpeedUnitOptions() {
    speedUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getSpeedResults(){
    speed time;

    double factorFrom = time.unitToKmh[unit.option1 - 1];
    double factorTo = time.unitToKmh[unit.option2 - 1];

    double kmh = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(kmh, factorTo);

    return converted;
}

void showSpeedResult(){
    speedUnits speedUnits;
    double result = getSpeedResults();
    double amount = unit.amount;

    showUnitResult(speedUnits.units[unit.option1 - 1], speedUnits.units[unit.option2 - 1], amount, result);
}

void showSpeedMenu(int STEP) {
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }

    showSpeedUnitOptions();
}