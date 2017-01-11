#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct length{
    double MM_TO_METER = 0.001;
    double CM_TO_METER = 0.01;
    double KM_TO_METER = 1000;
    double MILE_TO_METER = 1609.344;
    double NMI_TO_METER = 1852; // NAUTICAL MILE
    double INCH_TO_METER = 0.0254;
    double FOOT_TO_METER = 0.3048;
    double YARD_TO_METER = 0.9144;

    double factor;
};

double unitSelector(string unit){
    // String to lowercase
    std::transform(unit.begin(), unit.end(), unit.begin(), ::tolower);



}

double unitSelector(int unit){

}


