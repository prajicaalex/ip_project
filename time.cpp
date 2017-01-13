#include "time.h"


void showTimeUnitOptions() {
    timeUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getTimeResult(){
    time time;

    double factorFrom = time.unitToMinutes[unit.option1 - 1];
    double factorTo = time.unitToMinutes[unit.option2 - 1];

    double minutes = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(minutes, factorTo);

    return converted;
}

void showTimeResult(){
    timeUnits timeUnits;
    double result = getTimeResult();
    double amount = unit.amount;

    showUnitResult(timeUnits.units[unit.option1 - 1], timeUnits.units[unit.option2 - 1], amount, result);
}

void showTimeMenu(int STEP) {
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }


    showTimeUnitOptions();
}