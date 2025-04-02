#include <iostream>

/*
Calculate greatest common divisor (GSD) and least common multiple (LCM)
*/

using namespace std;

int gcdCalculate(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcmCalculate(int a, int b)
{
    return abs(a * b) / gcdCalculate(a, b);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers to calculate: ";
    cin >> num1 >> num2;

    int gcd = gcdCalculate(num1, num2);
    int lcm = lcmCalculate(num1, num2);

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
