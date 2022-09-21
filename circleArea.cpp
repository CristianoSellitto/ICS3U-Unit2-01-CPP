// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in September 2022
// A program that finds the area and perimeter for a circle

#include <iostream>
#include <cmath>

int main() {
    std::cout << "A circle has a radius of 15mm" << std::endl;
    std::cout << std::endl;
    std::cout << "This circle's area is " << (M_PI * pow(15, 2));
    std::cout << "mm²" << std::endl;
    std::cout << "This circle's perimeter is ";
    std::cout << (M_PI * (15 * 2)) << "mm" << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
