#ifndef CONVERTOR_LENGTH_H
#define CONVERTOR_LENGTH_H

#include "helper.h"

struct length {
    const double unitToMeter[9] = {
            0.001,
            0.01,
            1,
            1000,
            1609.344,
            1852,
            0.0254,
            0.3048,
            0.9144
    };
//    double MM_TO_METER = 0.001;
//    double CM_TO_METER = 0.01;
//    double KM_TO_METER = 1000;
//    double MILE_TO_METER = 1609.344;
//    double NMI_TO_METER = 1852; // NAUTICAL MILE
//    double INCH_TO_METER = 0.0254;
//    double FOOT_TO_METER = 0.3048;
//    double YARD_TO_METER = 0.9144;
};

struct lengthUnits {
    const string units[9] = {
            "mm",
            "cm",
            "m",
            "km",
            "mile",
            "nmi",
            "inch",
            "foot",
            "yard"
    };

    const int nrOfUnits = 9;
};

void showLengthMenu(int STEP);
void showFormatOption(int number, string action);

void showLengthResult();

#endif