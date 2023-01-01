// Exercise Two
// Rewrite the Hangman game from Chapter 4, "The Standard Template Library Hangman,"
// using functions. Include a function to get the player's guess and another 
// function to determine whether a player's guess is in the secret word.
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char getGuess();
bool guessMatches(string word, string guess);

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
        
        char guess = getGuess();
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            guess = getGuess();
        }
        used += guess;
        if (guessMatches(THE_WORD, guess))
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

char getGuess()
{
    char guess;
    cout << "\n\nEnter your guess: ";
    cin >> guess;
    return toupper(guess);
}

bool guessMatches(string word, char guess)
{
    if (word.find(guess) != string::npos)
    {
        return true;
    }
    return false;
}