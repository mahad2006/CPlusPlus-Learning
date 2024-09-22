#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20; // Declare and initialize variables

    // Nested if-else condition
    if (a == 10) {  // Check if a is equal to 10
        if (b == 20) {  // Check if b is equal to 20
            cout << "a is 10 and b is 20" << endl;  // If both conditions are true
        } else {
            cout << "a is 10 but b is not 20" << endl; // If a is 10 but b is not 20
        }
    } else {
        cout << "a is not 10" << endl; // If a is not 10
    }
    return 0;
}
