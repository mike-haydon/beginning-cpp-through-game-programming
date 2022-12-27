// Exercise Two
// Assuming that scores is a vector that holds elements of type int, what's
// wrong with the following code snippet (meant to increment each element)?
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);

    vector<int>::iterator iter;

    //incrememt each score
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        iter++;
    }

    // iter has not been properly dereferenced for use. To effectively 
    // increment the value, the loop logic should be (*iter)++
}