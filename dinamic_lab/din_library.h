
#pragma once
#ifndef DINAMIC_LAB_LIBRARY_H_EXPORT
#define DINAMIC_LAB_LIBRARY_H __declspec(dllexport)
#else
#define DINAMIC_LAB_LIBRARY_H __declspec(dllimport)
#endif

#include "string"
#include "iostream"
namespace din_library {
    class Leaver {
    public:
        DINAMIC_LAB_LIBRARY_H std::string leave(std::string);
    };
}
