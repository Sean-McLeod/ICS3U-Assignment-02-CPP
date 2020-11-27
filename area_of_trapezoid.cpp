// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can calculate the area of a trapezoid with
//    dimensions entered by users

#include <iostream>

int main()  {
    // This function calculates the area of a trapezoid

    float lowerBase;
    float upperBase;
    float height;
    float area;

    // input
    std::cout << "Enter the lowerbase of the trapezoid (cm):" << std::endl;
    std::cin >> lowerBase;
    std::cout << "Enter the upperbase of the trapezoid (cm):" << std::endl;
    std::cin >> upperBase;
    std::cout << "Enter the height of the trapezoid (cm):" << std::endl;
    std::cin >> height;

    // process
    area = ((lowerBase + upperBase)/2) * height;

    // output
    std::cout << "" << std::endl;
    std::cout << "The area of the trapezoid is " << area << "cm²" << std::endl;
}
