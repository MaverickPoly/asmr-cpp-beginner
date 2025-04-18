#include <iostream>

/*
USD -> RUB
RUB -> USD
*/

using namespace std;

int main(void)
{
    cout << "Welcome to simple currency converter app!" << endl;

    bool isRunning = true;
    string again, option;
    float amount, result;

    while (isRunning)
    {
        cout << endl
             << "1. USD to RUB" << endl
             << "2. RUB to USD" << endl;
        cout << "Enter an option: ";
        cin >> option;

        if (option == "1")
        {
            cout << "Enter money in USD: ";
            cin >> amount;
            result = amount * 81.14;
            cout << amount << " USD = " << result << " RUB" << endl;
        }
        else if (option == "2")
        {
            cout << "Enter money in RUB: ";
            cin >> amount;
            result = amount / 81.14;
            cout << amount << " RUB = " << result << " USD" << endl;
        }
        else
        {
            cout << "Invalid option! Please try again..." << endl;
            continue;
        }

        cout << "Calculate again(y/n)? ";
        cin >> again;
        if (again == "n" || again == "N")
            isRunning = false;
    }

    cout << endl
         << "Exiting calculator..." << endl;

    return 0;
}