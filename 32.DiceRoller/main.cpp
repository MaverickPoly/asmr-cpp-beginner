#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(0));
    cout
        << "Welcome to this dice roller app!" << endl;
    string again;
    int dice;

    while (true)
    {
        cout << "Roll dice(y/n): ";
        cin >> again;
        if (again == "n" || again == "N")
            break;

        dice = rand() % 6 + 1;

        cout << "Rolled dice: " << dice << endl;
    }

    cout << "Exiting program...";

    return 0;
}