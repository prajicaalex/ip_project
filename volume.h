#ifndef CONVERTOR_VOLUME_H
#define CONVERTOR_VOLUME_H

#include "helper.h"

struct volume {
    // this measures correspond to the ones from ariaUnits (same exact order)
    const double unitToLiter[12] = {
            0.01,
            0.001,
            0.1,
            1,
            28.32,
            4.5459,
            3.785,
            0.016387064,
            1,
            1000,
            0.001,
            764.56
    };
};

struct volumeUnits {
    const string units[12] = {
            "cl",
            "cm3",
            "dl",
            "dm3",
            "ft3",
            "gal *UK",
            "gal *USA",
            "in3",
            "l",
            "m3",
            "ml",
            "yd3",
    };

    const int nrOfUnits = 12;
};

void showVolumeMenu(int STEP);
void showVolumeResult();

#endif

