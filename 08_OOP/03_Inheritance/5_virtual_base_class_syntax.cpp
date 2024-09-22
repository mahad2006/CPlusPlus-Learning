#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base show()" << endl;
    }
};

// Virtual inheritance to resolve ambiguity
class Derived1 : virtual public Base
{
public:
    void derived1Method()
    {
        cout << "Derived1 method" << endl;
    }
};

class Derived2 : virtual public Base
{
public:
    void derived2Method()
    {
        cout << "Derived2 method" << endl;
    }
};

class Final : public Derived1, public Derived2
{
public:
    void finalMethod()
    {
        cout << "Final method" << endl;
    }
};

int main()
{
    Final obj;
    obj.show();           // Calls show() from Base
    obj.derived1Method(); // Method from Derived1
    obj.derived2Method(); // Method from Derived2
    obj.finalMethod();    // Method from Final
    return 0;
}
