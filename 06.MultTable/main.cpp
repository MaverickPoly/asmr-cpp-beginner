#include <iostream>

using namespace std;

void generateTable(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << i * j << " ";
        cout << endl;
    }
}

int main(void)
{
    int n;

    cout << "Enter the size of multiplication table: ";
    cin >> n;

    generateTable(n);

    return 0;
}