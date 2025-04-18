#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    const string filename = "text.txt";

    ifstream ReadFile(filename);

    string text;

    while (getline(ReadFile, text))
        cout << text << endl;

    cout << endl
         << "File content read successfully!" << endl;

    ReadFile.close();

    return 0;
}