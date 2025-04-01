#include <iostream>
#include <vector>

using namespace std;

// Get Nth Fibonacci number: Recursive
int fibonacciNRecursive(int n)
{
    if (n <= 1)
        return 1;
    return fibonacciNRecursive(n - 1) + fibonacciNRecursive(n - 2);
}

// Get Nth Fibonacci number: Iterative
int fibonacciNIterative(int n)
{
    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

vector<int> generateFibonacci(int n)
{
    vector<int> result;
    for (int i = 0; i < n; i++)
        result.push_back(fibonacciNIterative(i));

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of fibonacci numbers to generate: " << endl;
    cin >> n;

    vector<int> fibonacciNumbers = generateFibonacci(n);

    for (int i = 0; i < fibonacciNumbers.size(); i++)
        cout << fibonacciNumbers[i] << " ";

    return 0;
}
