// Exercise Three
// Write a new version of the Guess My Number program in which the player and the computer switch roles.
// That is, the player picks a number and the computer must guess what that number is.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // seed random number generator

    int secretNumber;
    int tries = 0;
    int min = 0;
    int max = RAND_MAX;
    int guess;


    cout << "Welcome to Guess My Number\n\n";
    cout << "Pick a number: ";
    cin >> secretNumber;

    do
    {
        guess = rand() % (max - min + 1) + min;
        
        cout << "Computer guessed: " << guess << endl;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
            max = guess;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
            min = guess;
        }
        else
        {
            cout << "\nThat's it! The computer got it in " << tries << " guesses\n"; 
        }
    } while (guess != secretNumber);

    return 0;
}