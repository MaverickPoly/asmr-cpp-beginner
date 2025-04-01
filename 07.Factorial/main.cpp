#include <iostream>
#include <vector>

using namespace std;

// Recursive approach
int factorialN(int n)
{
    if (n <= 1)
        return 1;
    return n * factorialN(n - 1);
}

// Iterative approach
int factorialIterativeN(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

vector<int> generateFactorial(int n)
{
    vector<int> result = {};
    for (int i = 1; i <= n; i++)
    {
        // result.push_back(factorialN(i));
        result.push_back(factorialIterativeN(i));
    }
    return result;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> factorials = generateFactorial(number);

    cout << "Size of a vector: " << factorials.size() << endl;

    for (int i = 0; i < factorials.size(); i++)
        cout << factorials[i] << " ";

    return 0;
}
