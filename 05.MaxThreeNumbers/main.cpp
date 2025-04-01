#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, max;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
            max = num1;
        else
            max = num3;
    }
    else
    {
        if (num2 > num3)
            max = num2;
        else
            max = num3;
    }

    cout << "The maximum number is " << max << endl;

    return 0;
}