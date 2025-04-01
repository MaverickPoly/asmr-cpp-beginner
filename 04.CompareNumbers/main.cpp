#include <iostream>

using namespace std;

int main(void)
{
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2)
        cout << "First number is larger: " << num1 << endl;
    else
        cout << "Second number is larger: " << num2 << endl;

    return 0;
}