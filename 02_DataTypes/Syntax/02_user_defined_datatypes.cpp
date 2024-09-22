#include <iostream>
using namespace std;

// Structure to define a user-defined data type "Person"
struct Person
{
    string name;
    int age;
};

int main()
{
    // Create a variable of type Person and assign values to its members
    Person person1;
    person1.name = "John";
    person1.age = 25;

    // Output the person's details
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    return 0;
}
