// Mad-Lib
// Creates a story based on user input
#include <iostream>
#include <string>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";

    string name = askText("Please enter a name: ");
    string noun = askText("Please enter a plural noun: ");
    int number = askNumber("Please enter a number: ");
    string bodyPart = askText("Please enter a body part: ");
    string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;

    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;

    return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "\nHere's your story:\nThe famous explorer " << name;
    cout << " had nearly given up the life-long quest to find\n";
    cout << "The Lost City of " << noun << " when one day, the " << noun;
    cout << " found the explorer.\nSurrounded by " << number << " " << noun;
    cout << ", a tear came to " << name << "'s " << bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the " << noun << "\npromptly devoured ";
    cout << name << ". The moral of the story? Be careful what you ";
    cout << verb << " for.";
}