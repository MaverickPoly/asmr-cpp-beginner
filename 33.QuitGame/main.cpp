#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<string> questions = {
    "What is the capital of Russia?",
    "What is the largest country?",
    "In which country mount Elbrus is located?",
    "Where Siberia is located?",
    "Who invented C++ programming language?"};
const vector<string> options = {
    "Moscow", "Delhi", "Cairo", "Tehran",                                     //
    "Canada", "Russia", "China", "India",                                     //
    "Pakistan", "Nepal", "Russia", "Iran",                                    //
    "China", "Mongolia", "Kazakhstan", "Russia",                              //
    "Guido Van Rossum", "Dennis Ritchie", "Bjarne Stroustrup", "Sergey Brin", //
};
const vector<int> answers = {1, 2, 3, 4, 3}; // Correct Answer Indexes

int main(void)
{
    cout << "Welcome to QUIZ App!" << endl;
    int guess;
    int correct = 0;
    int i = 0;

    while (i < questions.size())
    {
        cout << endl
             << "================" << endl;
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++)
        {
            int index = 4 * i + j;
            cout << j + 1 << ") " << options[index] << endl;
        }
        cout << "Enter: ";
        cin >> guess;

        if (guess < 1 || guess > 4)
        {
            cout << "Invalid guess!" << endl;
            continue;
        }

        if (guess == answers[i])
        {
            cout << "Correct!" << endl;
            correct++;
        }
        else
            cout << "Incorrect! " << "The answer was " << options[4 * i + answers[i] - 1] << endl;
        i++;
    }

    cout << endl
         << "============== "
         << "End of quiz!" << " ==============" << endl;
    cout << "Score: " << correct << "/" << questions.size() << endl;

    return 0;
}
