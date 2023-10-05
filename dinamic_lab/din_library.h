
#pragma once
#ifdef library_din_house_EXPORTS
#define DINAMIC_LAB_LIBRARY_H __declspec(dllexport)
#else
#define DINAMIC_LAB_LIBRARY_H __declspec(dllimport)
#endif
//set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
#include "string"
#include "iostream"

    class Leaver {
    public:
        std::string leave(std::string);
    };




