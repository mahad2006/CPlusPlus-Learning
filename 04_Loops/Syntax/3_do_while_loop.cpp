#include <iostream>
using namespace std;

int main()
{
    int i = 1; // Initialize counter variable

    // Do-while loop that executes at least once
    do
    {
        cout << "Iteration " << i << endl; // Print current iteration
        i++;                               // Increment the counter
    } while (i <= 5); // Continue while i <= 5

    return 0;
}
