#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string getOptionName(string digit)
{
    if (digit == "1")
        return "Rock";
    else if (digit == "2")
        return "Paper";
    else if (digit == "3")
        return "Scissors";
    return NULL;
}

int main(void)
{
    bool isRunning = true;
    string playAgain = "y";

    vector<string> options = {"rock", "paper", "scissors"};
    string option;
    string computer;
    int userScore = 0;
    int computerScore = 0;

    while (isRunning)
    {
        cout << endl
             << "1.Rock 2.Paper 3.Scissors" << endl;
        cout << "Enter option(1-3): ";
        cin >> option;
        computer = to_string(rand() % 3 + 1);

        if (option != "1" && option != "2" && option != "3")
        {
            cout << "Invalid option! Please try again..." << endl;
            continue;
        }

        cout << "User: " << getOptionName(option) << endl;
        cout << "Computer: " << getOptionName(computer) << endl;

        // User Lost States
        if ((option == "1" && computer == "2") || (option == "2" && computer == "3") || (option == "3" && computer == "1"))
        {
            cout << "-- You Lost!" << endl;
            computerScore++;
        }
        // Draw
        else if (option == computer)
        {
            cout << "-- Draw!" << endl;
        }
        // User Won State
        else
        {
            cout << "-- You won!" << endl;
            userScore++;
        }
        cout << "User score: " << userScore << endl;
        cout << "Computer score: " << computerScore << endl;

        cout << endl
             << "Do you want to play again(y/n): ";
        cin >> playAgain;
        if (playAgain == "n" || playAgain == "N")
            isRunning = false;
    }

    cout << endl
         << "Thanks for playing!!" << endl;

    return 0;
}