#include "volume.h"


void showVolumeUnitOptions() {
    volumeUnits u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

double getVolumeResults(){
    volume volume;

    double factorFrom = volume.unitToLiter[unit.option1 - 1];
    double factorTo = volume.unitToLiter[unit.option2 - 1];

    double liters = toBasicUnit(unit.amount, factorFrom);
    double converted = fromBasicUnit(liters, factorTo);

    return converted;
}

void showVolumeResult(){
    volumeUnits volumeUnits;
    double result = getVolumeResults();
    double amount = unit.amount;

    showUnitResult(volumeUnits.units[unit.option1 - 1], volumeUnits.units[unit.option2 - 1], amount, result);
}

void showVolumeMenu(int STEP) {
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }


    showVolumeUnitOptions();
}