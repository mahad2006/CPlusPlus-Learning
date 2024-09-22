#include <iostream>
using namespace std;

class MyClass
{
public:
    // Static member variable
    static int staticValue;

    // Static member function
    static void setStaticValue(int v)
    {
        staticValue = v;
    }

    static void displayStaticValue()
    {
        cout << "Static Value: " << staticValue << endl;
    }
};

// Initialize static member
int MyClass::staticValue = 0;

int main()
{
    MyClass::setStaticValue(100);  // Access static member function without object
    MyClass::displayStaticValue(); // Display static value

    return 0;
}
