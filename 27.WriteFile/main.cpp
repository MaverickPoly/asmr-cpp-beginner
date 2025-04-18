#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    /*
    Input Stream -> Get/Receive Data
    Output Stream -> Send Data
    */

    const string filename = "text.txt";

    ofstream WriteFile(filename);

    string text;

    cout << "Enter a file content: " << endl;
    getline(cin, text);
    cout
        << text;

    WriteFile << text;

    WriteFile.close();

    return 0;
}