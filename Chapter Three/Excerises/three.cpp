// Exercise 3
// What's wrong with the following code?
#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 2;
    const int COLUMNS = 3;
    char board[COLUMNS][ROWS] = {{'O', 'X', 'O'},
                                 {' ', 'X', 'X'}};

    // It appears that the values for rows and columns are reversed. By this declaration, we have a 2 x 3 array
    // that is trying to initalize as a 3 x 2 array. 

    return 0;
}