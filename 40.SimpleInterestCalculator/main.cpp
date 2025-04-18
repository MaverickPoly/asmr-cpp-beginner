#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Welcome to this interest calculator app!" << std::endl;
    bool isRunning = true;
    std::string again;

    float p, r, si;
    int t;

    while (isRunning)
    {
        std::cout << "Enter principal amount: ";
        std::cin >> p;
        std::cout << "Enter Rate of interest per annum: ";
        std::cin >> r;
        std::cout << "Enter Time Period: ";
        std::cin >> t;

        si = (p * r * t) / 100;
        std::cout << "Interest Rate: " << si << std::endl;

        std::cout
            << "Do you want to calculate again(y/n): ";
        std::cin >> again;
        if (again == "n" || again == "N")
            isRunning = false;
    }

    std::cout << "Thanks for using our calculator!" << std::endl;

    return 0;
}