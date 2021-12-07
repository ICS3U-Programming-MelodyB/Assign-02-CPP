// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 4, 2021
// This program asks the user for the unit, length, height and
// width of the pyramid. It then
// calculates and displays the surface area and
// volume.
#include <iostream>
#include <cmath>
#include <iomanip>

// declare variables
float length, width, height, surfaceArea, slantArea, sideArea, baseArea, volume;

int main() {
  // get input from user
  std::cout << "Today we will calculate the surface area and\n";
  std::cout << "volume of a pyramid.\n";
  std::string units;
  std::cout << "\033[1;35;38mEnter the units: ";
  std::cin >> units;
  std::cout << "\033[1;35;38mEnter the length: ";
  std::cin >> length;
  std::cout << "\033[1;35;38mEnter the width: ";
  std::cin >> width;
  std::cout << "\033[1;35;38mEnter the height: ";
  std::cin >> height;

  // process
    baseArea = length * width;
    slantArea = length * (sqrt(pow((width/2), 2) + pow(height, 2)));
    sideArea = width * (sqrt(pow((length/2), 2) + pow(height, 2)));
    surfaceArea = baseArea + sideArea + slantArea;
    volume = (length * width * height)/3;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "\033[1;32;38mSurface Area = " << std::fixed;
  std::cout << std::setprecision(2) << surfaceArea << units << " ^2.\n";
  std::cout << "\033[1;32;38mVolume = " << std::fixed;
  std::cout << std::setprecision(2) << volume << units<< "^3.\n";
}
