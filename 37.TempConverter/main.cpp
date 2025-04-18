#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    cout << "Welcome to temperature converter app!" << endl;
    bool isRunning = true;
    string again, option;
    float inputTemp, resTemp;

    while (isRunning)
    {
        cout << endl
             << "1. From Fahrenheit to Celsius" << endl
             << "2. From Celsius to Fahrenheit" << endl;

        cout << "Enter option: ";
        cin >> option;

        if (option == "1")
        {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> inputTemp;
            resTemp = (inputTemp - 32) * 5 / 9;
            cout << inputTemp << "°F = " << resTemp << "°C" << endl;
        }
        else if (option == "2")
        {
            cout << "Enter temperature in Celsius: ";
            cin >> inputTemp;
            resTemp = inputTemp * 9 / 5 + 32;
            cout << inputTemp << "°C = " << resTemp << "°F" << endl;
        }
        else
        {
            cout << "Invalid option! Please try again..." << endl;
            continue;
        }

        cout << "Calculate again(y/n): ";
        cin >> again;

        if (again == "n" || again == "N")
            isRunning = false;
    }

    cout << endl
         << "Thanks for calculating!" << endl;
    return 0;
}
