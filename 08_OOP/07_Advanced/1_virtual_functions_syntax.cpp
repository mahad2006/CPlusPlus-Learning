#include <iostream>
using namespace std;

class Base
{
public:
    // Virtual method for polymorphism
    virtual void show() const
    {
        cout << "Base class show()" << endl;
    }
};

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

    // Virtual function: basePtr points to a Derived object
    basePtr->show(); // Calls Derived's show() due to dynamic binding
    return 0;
}
