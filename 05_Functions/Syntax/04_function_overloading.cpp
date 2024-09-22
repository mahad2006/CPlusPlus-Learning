#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b; // Return sum of integers
}

// Overloaded function to add two floats
float add(float a, float b)
{
    return a + b; // Return sum of floats
}

int main()
{
    cout << "Sum of integers: " << add(10, 20) << endl;   // Calls integer version
    cout << "Sum of floats: " << add(5.5f, 2.3f) << endl; // Calls float version
    return 0;
}
