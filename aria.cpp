#include "aria.h"


void showAriaUnitOptions() {
    ariaUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getAriaResults(){
    aria aria;

    double factorFrom = aria.unitToMeterSquare[unit.option1 - 1];
    double factorTo = aria.unitToMeterSquare[unit.option2 - 1];

    double metersSquare = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(metersSquare, factorTo);

    return converted;
}

void showAriaResult(){
    ariaUnits ariaUnits;
    double result = getAriaResults();
    double amount = unit.amount;

    showUnitResult(ariaUnits.units[unit.option1 - 1], ariaUnits.units[unit.option2 - 1], amount, result);
}

void showAriaMenu(int STEP) {
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }


    showAriaUnitOptions();
}