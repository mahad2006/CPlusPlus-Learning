#include <iostream>
using namespace std;

class Base1
{
public:
    void show()
    {
        cout << "Base1 show()" << endl;
    }
};

class Base2
{
public:
    void show()
    {
        cout << "Base2 show()" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "Derived show()" << endl;
    }
};

int main()
{
    Derived obj;
    obj.Base1::show(); // Calls show() from Base1
    obj.Base2::show(); // Calls show() from Base2
    obj.show();        // Calls show() from Derived
    return 0;
}
