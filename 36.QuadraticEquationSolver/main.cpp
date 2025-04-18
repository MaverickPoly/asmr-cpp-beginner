#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void)
{
    float a, b, c;
    // ax^2 + bx + c = 0
    cout << "Enter argument 'a': ";
    cin >> a;
    cout << "Enter argument 'b': ";
    cin >> b;
    cout << "Enter argument 'c': ";
    cin >> c;

    string aText = a > 0 ? to_string(round(a)) : "- " + to_string(round(abs(a)));
    string bText = b > 0 ? "+ " + to_string(round(b)) : "- " + to_string(round(abs(b)));
    string cText = c > 0 ? "+ " + to_string(round(c)) : "- " + to_string(round(abs(c)));

    cout
        << endl
        << aText << "x^2 " << bText << "x " << cText << " = 0" << endl;

    float D = sqrt(pow(b, 2) - 4 * a * c);
    if (D > 0)
    {
        float x1 = (-b + D) / (2 * a);
        float x2 = (-b - D) / (2 * a);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        float x = (-b + D) / (2 * a);
        cout << "X = " << x << endl;
    }
    else
    {
        cout << "No values satisfy the equation!";
    }

    return 1;
}