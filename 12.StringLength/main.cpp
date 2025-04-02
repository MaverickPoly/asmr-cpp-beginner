#include <iostream>
#include <string>
#include <string.h>

using namespace std;

// Built in string method
int stringLengthMethod(string str)
{
    return str.length();
}

// Using C-style approach
int stringLengthOld(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Using strlen function from C
int stringLengthFunction(const char *str)
{
    return strlen(str);
}

int main(void)
{
    string str1 = "Hello world";
    char str2[] = "Hello world";

    cout << "Built-In Method: " << stringLengthMethod(str1) << endl;
    cout << "Old C-style approach: " << stringLengthOld(str2) << endl;
    cout << "strlen Function: " << stringLengthFunction(str2) << endl;

    return 0;
}