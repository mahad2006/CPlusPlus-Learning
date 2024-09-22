#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual method for polymorphism
    virtual void show() const
    {
        cout << "Base class show()" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Overridden method
    void show() const override
    {
        cout << "Derived class show()" << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    // Polymorphism: basePtr points to a Derived object
    basePtr->show(); // Calls Derived's show() due to polymorphism
    return 0;
}
