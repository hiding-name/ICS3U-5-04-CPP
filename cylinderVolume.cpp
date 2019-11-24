// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program cylinder volume calculator

#include <math.h>
#include <iostream>
#include <string>


float VolumeCalculator(float radius, float height) {
    // This'll calculate the volume of a cylinder with the parameters

    // variables
    float volume;

    // process
    volume = M_PI * radius * radius * height;
    return volume;
}

main() {
    // This is asks for the user input and runs volume_calculator()

    // variables
    std::string radiusString;
    std::string heightString;
    float radius;
    float height;
    float volume;

    // Welcomes the user
    std::cout << "Hi, this is CYLINDER VOLUME CALCULATOR." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    while (true) {
        try {
            // input
            std::cout << "What is the radius: " << std::endl;
            std::cin >> radiusString;
            std::cout << "What is the height: " << std::endl;
            std::cin >> heightString;
            // converts strings to float
            radius = std::stof(radiusString);
            height = std::stof(heightString);
            // runs Volume_Calculator()
            volume = VolumeCalculator(radius, height);
            // output
            std::cout << "\nThe volume is " << volume << " units cubed."
                      << std::endl;
            break;
        } catch(std::invalid_argument) {
            std::cout << "\nInvalid input."<< std::endl;
            std::cout << "Try again.\n"<< std::endl;
        }
    }
}
