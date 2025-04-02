#include <iostream>
#include <algorithm>
#include <cctype>
#include <random>

using namespace std;

int main(void)
{
    cout << "Welcome to the number guessing game! Here You need to guess number between 0-100!" << endl
         << "==============================" << endl;
    string again;
    bool running = true;
    int randomNumber, guess, attempts;

    // Random number
    random_device dv;
    mt19937 gen(dv());
    uniform_int_distribution<int> dist(1, 100);

    while (running)
    {
        cout << endl;
        attempts = 0;
        randomNumber = dist(gen);

        while (true)
        {
            cout << "Take a guess: ";
            cin >> guess;

            if (guess == randomNumber)
                break;
            else if (guess > randomNumber)
            {
                cout << "Too high! Try again!" << endl;
                attempts++;
            }
            else
            {
                cout << "Too low! Try again!" << endl;
                attempts++;
            }
        }

        cout << "Correct! The answer was " << randomNumber << endl;
        cout << "It took you " << attempts << " attempts to find it!" << endl;

        cout << "Do you want to play again(y, n): ";
        cin >> again;

        if (again == "n")
            running = false;
    }

    cout << endl
         << "Thanks for playing!" << endl;

    return 0;
}
