#ifndef CONVERTOR_MAINMENU_H
#define CONVERTOR_MAINMENU_H

#include "length.h"
#include "aria.h"
#include "volume.h"
#include "time.h"
#include "speed.h"
#include "temperature.h"
#include "mass.h"
#include "energy.h"
#include "pressure.h"
#include "density.h"
#include "fuel.h"

struct units {
    const string units[11] = {
            "Lungime",
            "Arie",
            "Volum",
            "Timp",
            "Viteza",
            "Temperatura",
            "Masa",
            "Energie",
            "Presiune",
            "Densitate",
            "Consum combustibil"
    };

    const string lowercaseUnits[11] = {
            "lungime",
            "arie",
            "volum",
            "timp",
            "viteza",
            "temperatura",
            "masa",
            "energie",
            "presiune",
            "densitate",
            "consum combustibil"
    };

    const int nrOfUnits = 11;
};

void startApp();

void initGlobalCodes();
void initApp();

void start();

void showMenu();
void showUnitOptions();
void showWelcomeMessage();

void promptUserInput();
int getOptionNumber(string input);
int getUnitFromUserInput(string input);
void resolveUnitSelection(string input);

// MAIN OPTION ADDITIONAL FUNCTIONS
int getAmount();
int showOptionsMenu(int STEP);
int getUserInputOption();
bool isValidStep(int STEP);
void showOtherOptions(int STEP);
void showFormatOption(int number, string action);
void showCurrentConfiguration();

// MAIN OPTION FUNCTION
void resolveExitOption();
void resolveInvalidOption();
void showOption1Selection();
void showOption2Selection();
void resolveAmountSelection();
void resolveShowResult();
void showFinalMenu();

#endif