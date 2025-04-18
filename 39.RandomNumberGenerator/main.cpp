#include <iostream>
#include <random>

using namespace std;

// Random Number Between 'a' and 'b' inclusive
int generateRandomNumber(int a, int b)
{
    random_device device;
    mt19937 rng(device());
    uniform_int_distribution<mt19937::result_type> dist(a, b);
    return dist(rng);
}

int main(void)
{
    int a, b;
    cout << "Enter min number: ";
    cin >> a;
    cout << "Enter max number: ";
    cin >> b;

    int randomNumber = generateRandomNumber(a, b);

    cout << "Random Number: " << randomNumber << endl;

    return 0;
}