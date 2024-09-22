#include <iostream>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    else
    {
        return n * factorial(n - 1); // Recursive case: n * factorial of n-1
    }
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl; // Print factorial of 5
    return 0;
}
