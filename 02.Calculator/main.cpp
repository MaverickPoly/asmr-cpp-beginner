#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    cout << "Welcome to this calculator app!" << endl;
    string again, operation;
    vector<string> validOperations = {"1", "2", "3", "4"};
    double num1, num2;

    while (true)
    {
        cout << "\n1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "\nChoose operation: ";

        cin >> operation;
        cout << typeid(validOperations).name() << endl;
        cout << typeid(operation).name() << endl;

        if (count(validOperations.begin(), validOperations.end(), operation) <= 0)
        {
            cout << "Invalid operation. Please try again..." << endl;
            continue;
        }

        cout << "Enter number one: ";
        cin >> num1;
        cout << "Enter number two: ";
        cin >> num2;

        cout << num1 << endl;
        cout << num2 << endl;

        if (operation == "1")
            cout << "Result: " << num1 + num2 << endl;
        else if (operation == "2")
            cout << "Result: " << num1 - num2 << endl;
        else if (operation == "3")
            cout << "Result: " << num1 * num2 << endl;
        else if (operation == "4")
            cout << "Result: " << num1 / num2 << endl;

        cout << "\nDo you want to calculate again(y/n)? ";
        cin >> again;
        transform(again.begin(), again.end(), again.begin(), ::tolower);

        if (again == "n")
            break;
    }

    cout << "Thanks for using our calculator!" << endl;

    return 0;
}