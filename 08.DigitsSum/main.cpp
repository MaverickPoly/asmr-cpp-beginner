#include <iostream>
#include <string.h>

using namespace std;

int calculateDigitSum(const char *str)
{
    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        int num = str[i] - '0';
        sum += num;
    }
    return sum;
}

int main()
{
    char str[100];
    cout << "Enter a number to calculate its digits: ";
    cin >> str;

    int digitSum = calculateDigitSum(str);

    cout << "Sum of digits of number " << str << ": " << digitSum << endl;

    return 0;
}