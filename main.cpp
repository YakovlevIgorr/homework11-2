//
// Created by Macbook on 14.09.2023.
//
#include <iostream>

#include "dinamic_lab/din_library.h"
int main() {
    Leaver leaver;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << leaver.leave(name);
    return 0;
}