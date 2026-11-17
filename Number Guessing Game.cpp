// Chantell Jenkins
// 11/16/2026
// Number Guessing Game

#include <iostream>
#include <random>
using namespace std;

int main()
{
    std::cout << "Number Guessing Game\n";
    const int lowerLimit = 1;
    const int upperLimit = 20;
    int targetNumber;
    int guess;
    int guessCounter = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(lowerLimit, upperLimit);
    targetNumber = dis(gen);

    while (guess != targetNumber)
    {
        std::cout << "Enter your guess number between " << lowerLimit << " and " << upperLimit << ": ";
        std::cin >> guess;
        guessCounter++;
    }
    if (guess > targetNumber)
    {
        std::cout << "Too high, try againn";
    }
    else if (guess < targetNumber)
    {
        std::cout << "Too low, try again.\n";
    }
    else
    {
        std::cout << "You guessed it. Congratulations!";
        std::cout << "Total number of guesses: " << guessCounter << std::endl;
    }
    return 0;
}