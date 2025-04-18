#include <iostream>

using namespace std;

void startPyramid()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

void startPyramidReverse()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

void printDiamond()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i += 2)
    {
        for (int j = 0; j < (rows - i) / 2; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = rows - 2; i > 0; i -= 2)
    {
        for (int j = 0; j < (rows - i) / 2; j++)
            cout << " ";

        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
}

void printTriangle()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < (rows - i); j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

int main(void)
{
    // startPyramid();
    // startPyramidReverse();
    // printDiamond();
    printTriangle();

    return 0;
}
