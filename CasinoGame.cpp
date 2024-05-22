//casino game//
#include <iostream>
#include <random>

int main() {
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Define range of numbers (assuming a casino roulette wheel with numbers 0 to 36)
    std::uniform_int_distribution<> dis(0, 36);
    
    // Generate a random number
    int chosenNumber = dis(gen);
    
    int guess;
    int attempts = 0;
    
    std::cout << "Welcome to the casino number guessing game!\n";
    std::cout << "Guess the number between 0 and 36: ";
    
    // Loop until the player guesses the correct number
    do {
        std::cin >> guess;
        attempts++;
        
        if (guess < chosenNumber)
            std::cout << "Too low! Try again: ";
        else if (guess > chosenNumber)
            std::cout << "Too high! Try again: ";
        else
            std::cout << "Congratulations! You guessed the number " << chosenNumber << " in " << attempts << " attempts!\n";
    } while (guess != chosenNumber);
    
    return 0;
}