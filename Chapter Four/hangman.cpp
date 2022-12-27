// Hangman
// The classic game of hangman
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
    // Setup
    const int MAX_WRONG = 8; // Maximum number of incorrect guesses allowed

    vector<string> words; // Collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    // Updated randomization from book to work with C++ 17.
    random_device randomDevice;
    mt19937 randomEngine(randomDevice());
    shuffle(words.begin(), words.end(), randomEngine);

    const string THE_WORD = words[0]; // Word to guess
    int wrong = 0; // Number of incorrect guesses
    string soFar(THE_WORD.size(), '-'); // Word guessed so far
    string used = ""; // Letters already guessed

    // Main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;
        
        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); // Make uppercase since secret word in uppercase
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }
        used += guess;
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right!" << guess << " is in the word.\n";
            // Update soFar to include newly guessed letter
            for (int i = 0; i < THE_WORD.length(); ++i)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }

        // Shut down
        if (wrong == MAX_WRONG)
        {
            cout << "\nYou've been hanged!";
        }
        else
        {
            cout << "\nYou guessed it!";
        }
    }

    cout << "\nThe word was " << THE_WORD << endl;
    return 0;
}