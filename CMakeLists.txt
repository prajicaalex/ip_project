cmake_minimum_required(VERSION 3.6)
project(Convertor)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mainMenu.cpp mainMenu.h length.cpp length.h helper.cpp helper.h aria.cpp aria.h volume.cpp volume.h time.cpp time.h speed.cpp speed.h temperature.cpp temperature.h mass.cpp mass.h energy.cpp energy.h pressure.cpp pressure.h density.cpp density.h fuel.cpp fuel.h)
add_executable(Convertor ${SOURCE_FILES})