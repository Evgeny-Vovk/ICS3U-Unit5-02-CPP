// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit5-02.cpp File, learning functions with parameters in C++.

#include <iostream>
#include <string>


void area(float baseAsFloat, float heightAsFloat) {
    // variables
    float areaAsFloat;

    // aprocess and output
    areaAsFloat = baseAsFloat * heightAsFloat / 2;
    std::cout << "The area of the triangle is " << areaAsFloat << "cm²";
}

int main() {
    // creating variables
    std::string(base);
    std::string(height);
    float baseAsFloat;
    float heightAsFloat;

    // input
    std::cout << "Enter the base length of a triangle(cm): ";
    std::cin >> base;
    std::cout << "Enter the height of a triangle(cm): ";
    std::cin >> height;
    std::cout << "\n";

    // process
    try {
        baseAsFloat = std::stof(base);
        heightAsFloat = std::stof(height);
        if (baseAsFloat <= 0 || heightAsFloat <= 0) {
            std::cout << "A triangle cannot have a height or "
                      << "a base with a value that's equal or less than 0.";
        } else {
            area(baseAsFloat, heightAsFloat);
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}
