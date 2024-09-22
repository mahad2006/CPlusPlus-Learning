#include <iostream>
using namespace std;

int globalVar = 100; // Global variable (accessible in entire program)

int main()
{
    int localVar = 10;                                // Local variable (accessible only in this function)
    cout << "Global Variable: " << globalVar << endl; // Print global variable
    cout << "Local Variable: " << localVar << endl;   // Print local variable
    return 0;
}
