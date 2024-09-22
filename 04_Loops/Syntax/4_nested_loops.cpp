#include <iostream>
using namespace std;

int main()
{
    // Nested for loop: outer loop runs 3 times, inner loop runs 2 times
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout << "i = " << i << ", j = " << j << endl; // Print values of i and j
        }
    }
    return 0;
}
