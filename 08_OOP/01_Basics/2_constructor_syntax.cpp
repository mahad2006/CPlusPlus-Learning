#include <iostream>
using namespace std;

class MyClass
{
public:
    // Default constructor
    MyClass()
    {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    MyClass(int v) : value(v)
    {
        cout << "Parameterized constructor called with value: " << value << endl;
    }

    // Copy constructor
    MyClass(const MyClass &other) : value(other.value)
    {
        cout << "Copy constructor called" << endl;
    }

    // Method to display value
    void display() const
    {
        cout << "Value: " << value << endl;
    }

private:
    int value;
};

int main()
{
    MyClass obj1;        // Calls default constructor
    MyClass obj2(10);    // Calls parameterized constructor
    MyClass obj3 = obj2; // Calls copy constructor

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
