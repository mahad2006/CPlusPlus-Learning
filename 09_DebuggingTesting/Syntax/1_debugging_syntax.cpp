#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 0;

    // Intentional bug: divide by zero
    if (y != 0)
    {
        cout << "Result: " << x / y << endl;
    }
    else
    {
        cerr << "Error: Division by zero" << endl;
    }

    return 0;
}
