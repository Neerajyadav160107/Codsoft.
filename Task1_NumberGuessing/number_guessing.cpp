#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed for random number

    int secret = rand() % 100 + 1; // Random number between 1-100
    int guess;
    int attempts = 0;

    cout << "=== NUMBER GUESSING GAME ===\n";
    cout << "Guess the number (1 to 100)\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < secret) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}
