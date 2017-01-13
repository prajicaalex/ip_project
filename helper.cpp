#include "helper.h"

// -------------------------------------------------- UNIT HELPERS ----------------------------------------
double toBasicUnit(double amount, double factor){
    return (amount * factor);
}

double fromBasicUnit(double amount, double factor){
    return (amount / factor);
}

void showUnitResult(string firstSubUnit, string secondSubUnit, double amount, double result){
    drawLineWithMessage("RESULT");
    cout<<amount<<" "<<firstSubUnit<<" = "<<result<<" "<<secondSubUnit<<endl;
}

// ---------------------------------------------------------------------------------------------------------

string convertToLowercase(string string){
    std::transform(string.begin(), string.end(), string.begin(), ::tolower);

    return string;
}

void showConvertFromMessage() {
    cout << "Please select your unit to convert from. You may select a unit by entering the number associated." << endl << endl;
}

void showConvertToMessage() {
    cout << "Please select your unit to convert to. You may select a unit by entering the number associated." << endl << endl;
}

void showEnterAmountMessage(){
    cout<<"Please enter the unit amount."<<endl;
}

void showResultMessage(double result){
    cout<<"Result: "<<result<<endl;
}

string getUserInput() {
    cout<<"Enter here: ";

    string input;
    std::getline(std::cin, input);

    return input;
}

void showInvalidOptionMessage(){
    cout<<"Invalid option entered! Try again!"<<endl<<endl;
}

bool isValidOption(int option, int nrOfUnits){
    return option >= -4 && option <= nrOfUnits;
}

bool isExitOption(string input) {
    exitOption exit;
    int inputAsNumber = atoi(input.c_str());

    if (inputAsNumber == exit.number && input.length() <= 2) {
        return true;
    } else if (input.compare(exit.lowercaseName) == 0) {
        return true;
    }
    return false;
}

void drawLineWithMessage(string message){
    cout<<"--------------------------------- "<<message<<" --------------------------------------"<<endl;
}

void drawLine(){
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;
}

bool is_number(const string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int getNumericalInput(){
    string input = getUserInput();

    while(! is_number(input)){
        showInvalidOptionMessage();
        input = getUserInput();
    }

    return atoi(input.c_str());
}

void clearScreen(){
    system("clear");
}

void showConvertMessage(int STEP){
    if(STEP == STEP2_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT FROM");
        showConvertFromMessage();
    } else if(STEP == STEP3_BACK_OPTION_CODE){
        drawLineWithMessage("CONVERT TO");
        showConvertToMessage();
    }
}