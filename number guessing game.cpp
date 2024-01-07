#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess, tries = 0;
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
