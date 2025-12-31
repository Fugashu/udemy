#include <iostream>  // For input/output
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time() to seed random numbers
#include <string>    // For std::string in yes/no input

using namespace std;

int main() {

        char playAgain; // Ask user if he/she wants to play again
    do {

        int maxNumber;
        cout << "Enter the max number for the secret number range" << endl;
        cin >> maxNumber;

        // Seed the random number generator with current time
        srand(time(0));
        // Generate a random number between 1 and maxNumber
        int secretNumber = rand() % maxNumber + 1;

        int guess;
        int attempts = 0;
        

        cout << "I've generated a secret number between 1 -"<< maxNumber << " Try to beat me!" << endl;

        do {

            cout << "Enter your guess: "<< endl;
            cin >> guess;
            attempts++;

            if (attempts >= 10){
                cout << "Too many attempts. My secret number was " << secretNumber << endl;
                break; // Exit the loop after 10 attempts
            }

            if (guess > secretNumber)
            {
                cout << "Number is too high!"<< endl;
            }
            else if (guess < secretNumber)
            {
                cout << "Number is too low!"<< endl;
            }
            // else if (guess == secretNumber) {
            //     cout << "Number is correct!" << endl;
            // }
            else {
                cout << "Number is correct!" << endl;
            }
        }
        while (guess != secretNumber && attempts < 10);

        cout << "You needed " << attempts << " attempts to guess my number!" << endl;
        cout << "Do you want to play again? Type 'y' for yes." << endl;
        cin >> playAgain;


      } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}