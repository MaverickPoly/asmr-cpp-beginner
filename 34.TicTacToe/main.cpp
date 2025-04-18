#include <iostream>
#include <string>
#include <vector>
#include <limits>

#define SIZE 3

using namespace std;

void displayBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "| " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " |" << endl;
        if (i < SIZE - 1)
        {
            cout << "-------------" << endl;
        }
    }
    cout << "-------------" << endl;
}

void initializeBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
}

char checkWin(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }

    for (int j = 0; j < SIZE; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
        {
            return board[0][j];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

bool checkDraw(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

bool getPlayerMove(char board[SIZE][SIZE], char player)
{
    int row, col;
    cout << "Player " << player << ", enter your move (row [1-" << SIZE << "] column [1-" << SIZE << "]): ";
    cin >> row >> col;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter numbers." << endl;
        return false;
    }

    row--;
    col--;

    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ')
    {
        board[row][col] = player;
        return true;
    }
    else
    {
        cout << "Invalid move. Try again." << endl;
        return false;
    }
}

int main(void)
{
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    char winner = ' ';
    bool draw = false;
    int moves = 0;

    initializeBoard(board);

    cout << "Welcome to Tic-Tac-Toe!" << endl;
    displayBoard(board);

    while (winner == ' ' && !draw)
    {
        if (getPlayerMove(board, currentPlayer))
        {
            displayBoard(board);
            winner = checkWin(board);
            moves++;
            draw = checkDraw(board);

            if (winner != ' ')
            {
                cout << "Player " << winner << " wins!\n";
            }
            else if (draw)
            {
                cout << "It's a draw!\n";
            }
            else
            {
                currentPlayer = (currentPlayer == 'X' ? 'O' : 'X');
            }
        }
    }

    return 0;
}