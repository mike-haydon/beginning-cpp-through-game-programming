// Exercise Two
// What's wrong with the following code?
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phrase = "Hello World!";

    for (int i = 0; i <= phrase.size(); ++i)
    {
        cout << "Character at position " << i << " is: " << phrase[i] << endl;
    }

    // Making the assumption that phrase is correctly declared (it wasn't in the book), the fault with this 
    // code is that the for loop uses <=. This results in the loop executing 12 times on a string that starts counting at 0. 
    // Last loop of the for will be out of bounds.
    
    return 0;
}