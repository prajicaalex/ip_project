#ifndef CONVERTOR_HELPER_H
#define CONVERTOR_HELPER_H

#include <string>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

extern int STEP1_BACK_OPTION_CODE;
extern int STEP2_BACK_OPTION_CODE;
extern int STEP3_BACK_OPTION_CODE;
extern int STEP4_BACK_OPTION_CODE;
extern int STEP5_BACK_OPTION_CODE;

extern int OPTION_NOT_FOUND_CODE;
extern int EXIT_OPTION_CODE;

extern string STEP1_BACK_OPTION_MESSAGE;
extern string STEP2_BACK_OPTION_MESSAGE;
extern string STEP3_BACK_OPTION_MESSAGE;
extern string STEP4_BACK_OPTION_MESSAGE;

extern string EXIT_OPTION_MESSAGE;

struct exitOption {
    int number = 0;
    string name = "Exit";
    string lowercaseName = "exit";
};

extern struct unit{
    int unit;
    int option1;
    int option2;
    double amount;
} unit;

// -------------------------------------------------- UNIT HELPERS ----------------------------------------

double toBasicUnit(double amount, double factor);

double fromBasicUnit(double amount, double factor);

void showUnitResult(string firstSubUnit, string secondSubUnit, double amount, double result);

// ---------------------------------------------------------------------------------------------------------

string convertToLowercase(std::string string);
bool isExitOption(string input);
void drawLineWithMessage(string message);

void showConvertFromMessage();
void showConvertToMessage();
void showEnterAmountMessage();

void showResultMessage(double result);

string getUserInput();

void showInvalidOptionMessage();

bool isValidOption(int option, int nrOfUnits);

bool is_number(const string& s);

int getNumericalInput();

void drawLine();

void clearScreen();

void showConvertMessage(int STEP);

#endif