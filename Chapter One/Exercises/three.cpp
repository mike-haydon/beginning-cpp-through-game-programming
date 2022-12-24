// Exercise Three
// What a program that gets three game scores from the user and displays the average.
#include <iostream>
using namespace std;

int main()
{
    float scoreOne, scoreTwo, scoreThree;

    cout << "Enter score #1: ";
    cin >> scoreOne;

    cout << "Enter score #2: ";
    cin >> scoreTwo;

    cout << "Enter score #3: ";
    cin >> scoreThree;

    cout << "The average score is: " << (scoreOne + scoreTwo + scoreThree) / 3 << endl;

    return 0;
}