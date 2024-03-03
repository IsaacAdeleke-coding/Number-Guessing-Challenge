//
//  main.cpp
//  Number Guessing Challenge
//
//  Created by Isaac Adeleke on 3/3/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator with current time
    int secretNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 0;
    const int maxAttempts = 7; // Maximum number of attempts allowed

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts + 1 << " attempts." << endl;
            break;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "Sorry, you've run out of attempts. The number was " << secretNumber << "." << endl;
    }

    return 0;
}
