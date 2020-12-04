// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program is a guessing game

#include <iostream>
#include <string>
#include <random>

int main() {
    // this function compares an integer to a random number

    std::cout << "Today we will play a guessing game." << std::endl;

    // variable declarations
    int randomNumber;
    std::string userGuess;
    int userGuessInt;

    // random number generation
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // process
    try {
        userGuessInt = std::stoi(userGuess);

        if (userGuessInt == randomNumber) {
            // output
            std::cout << "Correct! " << randomNumber
                      << " was the right answer.";
        } else {
            // output
            std::cout << "Incorrect, " << randomNumber
                      << " was the right answer.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
