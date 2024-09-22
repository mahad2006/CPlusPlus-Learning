#include <iostream>
using namespace std;

class MyClass
{
public:
    // Constructor
    MyClass(int v) : value(v) {}

    // Friend function declaration
    friend void showValue(const MyClass &obj);

private:
    int value; // Private member
};

// Friend function definition
void showValue(const MyClass &obj)
{
    cout << "Value from friend function: " << obj.value << endl;
}

int main()
{
    MyClass obj(42);
    showValue(obj); // Friend function can access private members

    return 0;
}
