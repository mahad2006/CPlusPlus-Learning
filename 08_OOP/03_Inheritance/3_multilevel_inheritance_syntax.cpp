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
class Intermediate : public Base
{
public:
    void intermediateMethod()
    {
        cout << "Intermediate class method" << endl;
    }
};

// Further derived class inheriting from Intermediate
class Derived : public Intermediate
{
public:
    void derivedMethod()
    {
        cout << "Derived class method" << endl;
    }
};

int main()
{
    Derived obj;
    obj.baseMethod();         // Inherited from Base
    obj.intermediateMethod(); // Inherited from Intermediate
    obj.derivedMethod();      // Method in Derived
    return 0;
}
