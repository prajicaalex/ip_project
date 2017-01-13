#include "length.h"

struct unit unit;

void showLengthUnitOptions() {
    lengthUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getLengthResults(){
    length length;

    double factorFrom = length.unitToMeter[unit.option1 - 1];
    double factorTo = length.unitToMeter[unit.option2 - 1];

    double meters = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(meters, factorTo);

    return converted;
}

void showLengthResult(){
    lengthUnits lengthUnits;
    double result = getLengthResults();
    double amount = unit.amount;

    showUnitResult(lengthUnits.units[unit.option1 - 1], lengthUnits.units[unit.option2 - 1], amount, result);
}

void showLengthMenu(int STEP) {
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }


    showLengthUnitOptions();
}


