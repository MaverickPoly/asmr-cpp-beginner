#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    const string copyFile = "file1.txt";
    const string pasteFile = "file2.txt";

    ifstream ReadFile(copyFile);

    string text;
    vector<string> texts;

    while (getline(ReadFile, text))
        texts.push_back(text);

    ofstream WriteFile(pasteFile);

    string str;
    for (const string &line : texts)
        str += line + "\n";

    WriteFile << str;

    cout << "File content successfully copied!";

    ReadFile.close();
    WriteFile.close();

    return 0;
}