// Print the Sum of number from 1 to n.

#include <iostream>
using namespace std;
int main()
{

    int n;
    int sum=0;
    cout << "Enter any number " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of number from 1 to " << n << " is : " << sum << endl;

    return 0;
}