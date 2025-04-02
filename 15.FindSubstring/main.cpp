#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string text, substring;

    cout << "Enter a text: ";
    getline(cin, text);

    cout << "Enter a substring: ";
    getline(cin, substring);

    size_t position = text.find(substring);

    if (position != string::npos)
        cout << "Substring found at position: " << position << endl;
    else
        cout << "Substring not found!" << endl;

    return 0;
}
