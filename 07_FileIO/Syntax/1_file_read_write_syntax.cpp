#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open())
    {
        outFile << "Hello, file I/O!" << endl;
        outFile.close(); // Close the file after writing
    }
    else
    {
        cerr << "Unable to open file for writing" << endl;
    }

    // Reading from a file
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            cout << line << endl; // Output each line read from the file
        }
        inFile.close(); // Close the file after reading
    }
    else
    {
        cerr << "Unable to open file for reading" << endl;
    }

    return 0;
}
