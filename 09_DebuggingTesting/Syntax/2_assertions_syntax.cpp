#include <iostream>
#include <cassert>
using namespace std;

int divide(int a, int b)
{
    assert(b != 0); // Ensure b is not zero
    return a / b;
}

int main()
{
    int result = divide(10, 2); // Valid division
    cout << "Result: " << result << endl;

    // Uncommenting the line below will trigger an assertion failure
    // int errorResult = divide(10, 0);

    return 0;
}
