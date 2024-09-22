#include <iostream>
using namespace std;

int safeDivide(int numerator, int denominator)
{
    // Check if denominator is zero to avoid division by zero
    if (denominator == 0)
    {
        cerr << "Error: Division by zero is not allowed." << endl;
        return 0; // Return an error code or handle appropriately
    }
    return numerator / denominator;
}

int main()
{
    int num = 10;
    int denom = 0;
    cout << "Result: " << safeDivide(num, denom) << endl;
    return 0;
}
