#include <iostream>
using namespace std;

class Base1
{
public:
    void method1()
    {
        cout << "Base1 method" << endl;
    }
};

class Base2
{
public:
    void method2()
    {
        cout << "Base2 method" << endl;
    }
};

// Derived class inherits from both Base1 and Base2
class Derived : public Base1, public Base2
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
    obj.method1();       // Inherited from Base1
    obj.method2();       // Inherited from Base2
    obj.derivedMethod(); // Method in Derived class
    return 0;
}
