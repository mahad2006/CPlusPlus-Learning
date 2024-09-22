#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void baseMethod()
    {
        cout << "Base class method" << endl;
    }
};

// Derived class inheriting from Base class
class Derived : public Base
{
public:
    void derivedMethod()
    {
        cout << "Derived class method" << endl;
    }
};

int main()
{
    Derived obj;         // Create an object of Derived class
    obj.baseMethod();    // Call method from base class
    obj.derivedMethod(); // Call method from derived class
    return 0;
}
