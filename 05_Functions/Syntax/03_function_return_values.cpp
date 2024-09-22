#include <iostream>
using namespace std;

// Function that returns the product of two numbers
int multiply(int a, int b)
{
    return a * b; // Return the product of a and b
}

int main()
{
    int result = multiply(4, 5);           // Call the function and store the result
    cout << "Product: " << result << endl; // Print the product
    return 0;
}
