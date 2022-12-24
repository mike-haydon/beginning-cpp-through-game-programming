// Exercise Two
// What's wrong with the following loop?
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    while (x)
    {
        ++x;
        cout << x << endl;
    }

    return 0;
}


// This code enters an infinite loop without providing an exit scenario.