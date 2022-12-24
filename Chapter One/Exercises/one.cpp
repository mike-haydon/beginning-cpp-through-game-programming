// Exercise One
// Create a list of six legal variables names - three good choices and three bad choices.
// Explain why each name falls into the good or bad category
#include <string>
using std::string;

int main()
{
    string mainCharacterName;
    // This variable is a good choice because it is descriptive, without being too long.
    // Any developer can look at this variable and know that is holds the name of the main character.

    bool isActive;
    // This variable is a good choice because it is descriptive, and presents itself as something that can only be
    // interpreted as true or false.

    int highScore;
    // This variable is a good choice because it is descriptive and uses the correct type.

    string n;
    // This variable is a bad choice because it is not descriptive. 
    //It would be hard to look at this variable and know what it means.

    bool light_on;
    // This variable seems like a good choice at face value, but is ultimately a bad choice because it is not
    // consistent with the other variables. For this variable to turn into a good choice it would need to be 
    // refactored from snake case to camelCase.

    int money;
    // This variable is a bad choice because the description implies money is being stored. Money typically involves
    // both whole and partial numbers and would be better suited for a decimal field.

    return 0;
}