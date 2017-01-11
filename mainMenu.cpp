#include <string>
#include <iostream>
#include <cstdlib>

#include "helper.h"

using namespace std;

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

struct exitOption {
    int number = 0;
    string name = "Exit";
    string lowercaseName = "exit";
};

int EXIT_OPTION_CODE = -1;
int OPTION_NOT_FOUND_CODE = -2;

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

void showExitOption() {
    exitOption exit;

    cout << endl;
    cout << exit.number << ". " << exit.name << endl;
}

void showMenu() {
    showWelcomeMessage();
    showUnitOptions();
    showExitOption();
}

void showInputMessage(){
    cout<<"Enter option: ";
}

string getUserInput(){
    string input;
    std::getline(std::cin, input);

    return input;
}

bool isExitOption(string input){
    exitOption exit;
    int inputAsNumber = atoi(input.c_str());

    if(inputAsNumber == exit.number && input.length() <= 2){
        return true;
    } else if(input.compare(exit.lowercaseName) == 0){
        return true;
    }
    return false;
}

int getOptionNumber(string input){
    units units;

    for (int i = 0; i < units.nrOfUnits; ++i) {
        if(input.compare(units.lowercaseUnits[i]) == 0){
            return i;
        }
    }

    return OPTION_NOT_FOUND_CODE;
}

int getUnitFromUserInput(string input){
    if(isExitOption(input)){
        return EXIT_OPTION_CODE;
    }

    int option = getOptionNumber(input);

    if(option == OPTION_NOT_FOUND_CODE){
        return OPTION_NOT_FOUND_CODE;
    }

    return option;
}

void promptUserInput();

void showUIForSelectedOption(int option){
    cout<<"OPTION: "<<option;
}

void resolveUnitSelection(string input){
    input = convertToLowercase(input);

    int option = getUnitFromUserInput(input);

    if(option == EXIT_OPTION_CODE){
        exit(EXIT_OPTION_CODE);
    }

    if(option == OPTION_NOT_FOUND_CODE){
        promptUserInput();
    }

    showUIForSelectedOption(option);
}

void promptUserInput(){
    string input;

    showInputMessage();
    input = getUserInput();

    resolveUnitSelection(input);
}









