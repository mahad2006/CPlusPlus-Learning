#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Using file streams for writing
    ofstream fileStream("streamExample.txt");
    if (fileStream)
    {
        fileStream << "Writing with file streams." << endl;
        fileStream.close();
    }
    else
    {
        cerr << "Error opening file for writing." << endl;
    }

    // Using file streams for reading
    ifstream fileStreamRead("streamExample.txt");
    string content;
    if (fileStreamRead)
    {
        while (getline(fileStreamRead, content))
        {
            cout << content << endl;
        }
        fileStreamRead.close();
    }
    else
    {
        cerr << "Error opening file for reading." << endl;
    }

    return 0;
}
