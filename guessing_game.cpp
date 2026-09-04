#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); 
    
    // Generate a random number between 1 and 10
    int secretNumber = (std::rand() % 10) + 1; 
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have picked a number between 1 and 10.\n\n";

    // Loop until the user guesses correctly
    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations, You guessed the right number!\n";
        }
    }

    return 0;
}
