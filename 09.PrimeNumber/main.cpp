#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i <= sqrt(number); i++)
        if (number % i == 0)
            return false;

    return true;
}

int main(void)
{
    int n;
    std::cout << "Enter the number of prime numbers to generate:" << std::endl;
    std::cin >> n;

    std::vector<int> primes = {};

    int i = 0;
    while (primes.size() < n)
    {
        if (isPrime(i))
            primes.push_back(i);
        i++;
    }

    std::cout << "Prime numbers:" << std::endl;
    for (int i = 0; i < primes.size(); i++)
        std::cout << primes[i] << " ";

    return 0;
}