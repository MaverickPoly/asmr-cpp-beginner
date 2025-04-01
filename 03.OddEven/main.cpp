#include <iostream>

bool isEven(int number)
{
    return number % 2 == 0;
}

using namespace std;

int main()
{
    int number;
    while (true)
    {
        cout << "Enter a number to check (-1 to quit): ";
        cin >> number;

        if (number == -1)
            break;

        if (isEven(number))
            cout << "Number " << number << " is even!" << endl;
        else
            cout << "Number " << number << " is odd!" << endl;

        cout << endl;
    }

    cout << "Exiting program..." << endl;

    return 0;
}