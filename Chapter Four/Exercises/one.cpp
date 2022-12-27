// Exercise One
// Write a program using vectors and iterators that allows a user to maintain a list of
// his or her favorite games. The program should allow the user to list all game
// titles, add a game title, and remove a game title.  
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Define vector of strings
    vector<string> gameTitles;
    // Define vector iterator
    vector<string>::const_iterator gameTitleIter;

    int option;

    cout << "Welcome to your game list.";

    // Start program loop
    while (option != 4)
    {
        // Ask user if they want to list, add, remove, or quit
        cout << "What would you like to do?\n";
        cout << "1. View my games\n";
        cout << "2. Add a game\n";
        cout << "3. Remove a game\n";
        cout << "4. Quit\n";
        cout << "Selection: ";
        cin >> option;

        // If they select option 1 (list), list all games
        if (option == 1)
        {
            cout << "\n\nYou have the following games in your list:\n";
            for (gameTitleIter = gameTitles.begin(); gameTitleIter != gameTitles.end(); ++gameTitleIter)
            {
                cout << *gameTitleIter << endl;
            }
            cout << "\n\n";
        }

        // If they select option 2 (add), provide way to input game title and append to vector
        if (option == 2)
        {
            cout << "\n\nWhat game would you like to add: ";
            string tempName;
            cin >> tempName;
            gameTitles.push_back(tempName);
            cout << "\n\n";
        }

        // If they select option 3 (remove), provide way to input game title and remove from vector
        if (option == 3)
        {
            cout << "\n\nWhat game would you like to remove: ";
            string tempName;
            cin >> tempName;
            int pos;
            gameTitleIter = find(gameTitles.begin(), gameTitles.end(), tempName);
            gameTitles.erase(gameTitleIter);
            cout << "\n\n";
        }
        
        // If they select option 4 (quit), exit loop
        if (option == 4)
        {
            break;
        }
    }

    cout << "Goodbye.";
    
}