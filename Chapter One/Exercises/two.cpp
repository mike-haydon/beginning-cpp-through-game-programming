// Exercise Two
// What's displayed by each line in the following code snippet? Explain each result.
#include <iostream>
using namespace std;

int main()
{
    cout << "Seven divied by three is " << 7 / 3 << endl;
    // The output is an integer because the input is an integer divided by an integer.

    cout << "Seven divied by three is " << 7.0 / 3 << endl;
    // The output is a float because the input is a float divided by an integer.

    cout << "Seven divied by three is " << 7.0 / 3.0 << endl;
    // The output is a float because the input is a float divided by a float. 

    return 0;
}