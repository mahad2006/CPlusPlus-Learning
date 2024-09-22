#include <iostream>
using namespace std;

int main()
{
    int choice = 2; // Initialize choice variable

    // Switch case based on the value of choice
    switch (choice)
    {
    case 1:
        cout << "Choice is 1" << endl; // Print when choice is 1
        break;
    case 2:
        cout << "Choice is 2" << endl; // Print when choice is 2
        break;
    default:
        cout << "Invalid choice" << endl; // Default case when no match
    }
    return 0;
}
