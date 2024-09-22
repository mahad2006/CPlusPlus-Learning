#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    // Handling divide-by-zero error
    if (b == 0)
    {
        cerr << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "Result: " << a / b << endl;
    }

    return 0;
}
