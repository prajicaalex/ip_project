#include "mainMenu.h"

int STEP1_BACK_OPTION_CODE;
int STEP2_BACK_OPTION_CODE;
int STEP3_BACK_OPTION_CODE;
int STEP4_BACK_OPTION_CODE;
int STEP5_BACK_OPTION_CODE;

int OPTION_NOT_FOUND_CODE;
int EXIT_OPTION_CODE;

string STEP1_BACK_OPTION_MESSAGE;
string STEP2_BACK_OPTION_MESSAGE;
string STEP3_BACK_OPTION_MESSAGE;
string STEP4_BACK_OPTION_MESSAGE;

string EXIT_OPTION_MESSAGE;

void startApp() {
    initGlobalCodes();
    start();
}

void initGlobalCodes() {
    OPTION_NOT_FOUND_CODE = -6;
    EXIT_OPTION_CODE = 0;

    STEP1_BACK_OPTION_CODE = -1;
    STEP2_BACK_OPTION_CODE = -2;
    STEP3_BACK_OPTION_CODE = -3;
    STEP4_BACK_OPTION_CODE = -4;
    STEP5_BACK_OPTION_CODE = -5;

    EXIT_OPTION_MESSAGE = "Exit";

    STEP1_BACK_OPTION_MESSAGE = "Back to unit selection";
    STEP2_BACK_OPTION_MESSAGE = "Back to pick unit to convert from";
    STEP3_BACK_OPTION_MESSAGE = "Back to pick unit to convert to";
    STEP4_BACK_OPTION_MESSAGE = "Back to pick unit amount";
}

void start(){
    initApp();
    showMenu();
    promptUserInput();
}

void initApp() {
    unit.unit = -999;
    unit.option1 = -999;
    unit.option2 = -999;
    unit.amount = 0;
}

void app(int STEP) {
    clearScreen();
    showCurrentConfiguration();

    if (STEP == EXIT_OPTION_CODE) {
        resolveExitOption();
    } else if (STEP == OPTION_NOT_FOUND_CODE) {
        resolveInvalidOption();
    } else if (STEP == STEP1_BACK_OPTION_CODE) {
        start();
    } else if (STEP == STEP2_BACK_OPTION_CODE) {
        showOption1Selection();
    } else if (STEP == STEP3_BACK_OPTION_CODE) {
        showOption2Selection();
    } else if (STEP == STEP4_BACK_OPTION_CODE) {
        resolveAmountSelection();
    } else {
        resolveShowResult();
        showFinalMenu();
    }
}

void resolveExitOption() {
    exit(EXIT_OPTION_CODE);
}

void resolveInvalidOption() {
    app(STEP1_BACK_OPTION_CODE);
}

void showOption1Selection() {
    int option1 = showOptionsMenu(STEP2_BACK_OPTION_CODE);
    if(isValidStep(option1)){
        unit.option1 = option1;
        app(STEP3_BACK_OPTION_CODE);
    } else {
        app(option1);
    }
}

void showOption2Selection() {
    int option2 = showOptionsMenu(STEP3_BACK_OPTION_CODE);
    if(isValidStep(option2)){
        unit.option2 = option2;
        app(STEP4_BACK_OPTION_CODE);
    } else {
        app(option2);
    }
}

int showOptionsMenu(int STEP) {
    int nrOfUnits;
    if (unit.unit == 0) {
        lengthUnits lengthUnits;
        nrOfUnits = lengthUnits.nrOfUnits;
        showLengthMenu(STEP);
    } else if(unit.unit == 1){
        ariaUnits ariaUnits;
        nrOfUnits = ariaUnits.nrOfUnits;
        showAriaMenu(STEP);
    } else if(unit.unit == 2){
        volumeUnits volumeUnits;
        nrOfUnits = volumeUnits.nrOfUnits;
        showVolumeMenu(STEP);
    } else if(unit.unit == 3){
        timeUnits timeUnits;
        nrOfUnits = timeUnits.nrOfUnits;
        showTimeMenu(STEP);
    } else if(unit.unit == 4){
        speedUnits speedUnits;
        nrOfUnits = speedUnits.nrOfUnits;
        showSpeedMenu(STEP);
    } else if(unit.unit == 5){
        temperatureUnits temperatureUnits;
        nrOfUnits = temperatureUnits.nrOfUnits;
        showTemperatureMenu(STEP);
    } else if(unit.unit == 6){
        massUnits massUnits;
        nrOfUnits = massUnits.nrOfUnits;
        showMassMenu(STEP);
    } else if(unit.unit == 7){
        energyUnits energyUnits;
        nrOfUnits = energyUnits.nrOfUnits;
        showEnergyMenu(STEP);
    } else if(unit.unit == 8){
        pressureUnits pressureUnits;
        nrOfUnits = pressureUnits.nrOfUnits;
        showPressureMenu(STEP);
    } else if(unit.unit == 9){
        densityUnits densityUnits;
        nrOfUnits = densityUnits.nrOfUnits;
        showDensityMenu(STEP);
    } else{
        fuelUnits fuelUnits;
        nrOfUnits = fuelUnits.nrOfUnits;
        showFuelMenu(STEP);
    }

    showOtherOptions(STEP);

    int option = getUserInputOption();
    if (! isValidOption(option, nrOfUnits)) {
        return OPTION_NOT_FOUND_CODE;
    } else {
        return option;
    };
}

bool isValidStep(int STEP){
    return ! (STEP == OPTION_NOT_FOUND_CODE || STEP == EXIT_OPTION_CODE || STEP == STEP1_BACK_OPTION_CODE
              || STEP == STEP2_BACK_OPTION_CODE || STEP == STEP3_BACK_OPTION_CODE || STEP == STEP4_BACK_OPTION_CODE
              || STEP == STEP5_BACK_OPTION_CODE);
}

void showOtherOptions(int STEP){
    drawLine();

    STEP = - STEP;
    STEP--;

    showFormatOption(EXIT_OPTION_CODE, EXIT_OPTION_MESSAGE);

    if(STEP > 0){
        showFormatOption(STEP1_BACK_OPTION_CODE, STEP1_BACK_OPTION_MESSAGE);
    }

    if(STEP > 1){
        showFormatOption(STEP2_BACK_OPTION_CODE, STEP2_BACK_OPTION_MESSAGE);
    }

    if(STEP > 2){
        showFormatOption(STEP3_BACK_OPTION_CODE, STEP3_BACK_OPTION_MESSAGE);
    }

    if(STEP > 3){
        showFormatOption(STEP4_BACK_OPTION_CODE, STEP4_BACK_OPTION_MESSAGE);
    }

    drawLine();
}

void showFormatOption(int number, string action) {
    cout << number << ". " << action << endl;
}

int getUserInputOption() {
    string input = getUserInput();

    return atoi(input.c_str());
}

void resolveAmountSelection() {
    unit.amount = getAmount();
    app(STEP5_BACK_OPTION_CODE);
}

void resolveShowResult() {
    if (unit.unit == 0) {
        showLengthResult();
    } else if(unit.unit == 1){
        showAriaResult();
    } else if(unit.unit == 2){
        showVolumeResult();
    } else if(unit.unit == 3){
        showTimeResult();
    } else if(unit.unit == 4){
        showSpeedResult();
    } else if(unit.unit == 5){
        showTemperatureResult();
    } else if(unit.unit == 6){
        showMassResult();
    } else if(unit.unit == 7){
        showEnergyResult();
    } else if(unit.unit == 8){
        showPressureResult();
    } else if(unit.unit == 9){
        showDensityResult();
    } else {
        showTimeResult();
    }
}

int getAmount() {
    drawLineWithMessage("AMOUNT");

    showOtherOptions(STEP4_BACK_OPTION_CODE);

    showEnterAmountMessage();
    return getNumericalInput();
}


void showWelcomeMessage() {
    cout << "Please select your unit to convert. You may select a unit by entering the number associated or "
            "the name of the unit." << endl << endl;
}

void showUnitOptions() {
    units u;

    for (int i = 0; i < u.nrOfUnits; ++i) {
        cout << i + 1 << ". " << u.units[i] << endl;
    }
}

void showMenu() {
    showWelcomeMessage();
    showUnitOptions();
    showOtherOptions(STEP1_BACK_OPTION_CODE);
}

int getOptionNumber(string input) {
    units units;

    if (input.length() >= 1 && input.length() <= 2) {
        int inputAsNumber = atoi(input.c_str());
        if (inputAsNumber >= 1 && inputAsNumber <= units.nrOfUnits) {
            return inputAsNumber;
        }
    } else {
        for (int i = 0; i < units.nrOfUnits; ++i) {
            if (input.compare(units.lowercaseUnits[i]) == 0) {
                return i + 1;
            }
        }
    }

    return OPTION_NOT_FOUND_CODE;
}

int getUnitFromUserInput(string input) {
    if (isExitOption(input)) {
        return EXIT_OPTION_CODE;
    }

    int option = getOptionNumber(input);

    return option;
}

void resolveUnitSelection(string input) {
    input = convertToLowercase(input);

    int option = getUnitFromUserInput(input);

    if(isValidStep(option)){
        unit.unit = option - 1;
        app(STEP2_BACK_OPTION_CODE);
    } else {
        app(option);
    }
}

void promptUserInput() {
    string input = getUserInput();
    resolveUnitSelection(input);
}

void showFinalMenu(){
    drawLineWithMessage("GO BACK OPTIONS");
    showOtherOptions(STEP5_BACK_OPTION_CODE);

    int option = getUserInputOption();
    if (isValidOption(option, 0)) {
        app(option);
    } else {
        drawLineWithMessage("Invalid option entered. Try again!");
        showFinalMenu();
    };
}

void showCurrentConfiguration(){
    units units;

    drawLine();
    cout<<endl;
    cout<<"Current configuration"<<endl;

    if(unit.amount != 0){
        cout<<"Unit: "<<units.units[unit.unit]<<endl;
//        cout<<"Subunit 1: "<<units.units[unit.option1]<<endl;
//        cout<<"Subunit 2: "<<units.units[unit.option2]<<endl;
        cout<<"Amount: "<<unit.amount<<endl;
    } else if(unit.option2 != -999){
        cout<<"Unit: "<<units.units[unit.unit]<<endl;
    } else if(unit.option1 != -999){
        cout<<"Unit: "<<units.units[unit.unit]<<endl;
    } else if(unit.unit != -999){
        cout<<"Unit: "<<units.units[unit.unit]<<endl;
    } else {
        cout<<"No current configuration"<<endl;
    }

    cout<<endl;
    drawLine();
    cout<<endl;
}