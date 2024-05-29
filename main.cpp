//
//  main.cpp
//  Number Guessing Challenge
//
//  Created by Isaac Adeleke on 5/29/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int playerGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Challenge!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;

    // Game loop
    while (playerGuess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;

        attempts++;

        if (playerGuess < secretNumber) {
            std::cout << "Too low!" << std::endl;
        } else if (playerGuess > secretNumber) {
            std::cout << "Too high!" << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}

