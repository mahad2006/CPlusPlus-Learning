#include <iostream>
using namespace std;

class EncapsulationExample
{
public:
    // Setter method to modify private member
    void setPrivateValue(int v)
    {
        privateValue = v;
    }

    // Getter method to access private member
    int getPrivateValue() const
    {
        return privateValue;
    }

private:
    int privateValue; // Private member variable
};

int main()
{
    EncapsulationExample obj;                                   // Create an object of EncapsulationExample
    obj.setPrivateValue(42);                                    // Set value using setter method
    cout << "Private Value: " << obj.getPrivateValue() << endl; // Get and display value
    return 0;
}
