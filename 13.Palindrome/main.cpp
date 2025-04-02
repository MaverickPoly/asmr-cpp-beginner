#include <iostream>
#include <string>

using namespace std;

string reverseString(const string str)
{
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
        reversed += str[i];
    return reversed;
}

bool isPalindrome(const string str)
{
    return str == reverseString(str);
}

int main(void)
{

    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
        cout << input << " is a palindrome text!" << endl;
    else
        cout << input << " is NOT a palindrome text!" << endl;

    return 0;
}