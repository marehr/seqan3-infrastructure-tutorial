#include <iostream>
#include "factorial.hpp"

int main()
{
    long n;
    std::cout << "n is ";
    std::cin >> n;

    long fac = factorial(n);
    std::cout << "The factorial of " << n << " is " << fac << ".\n";
}
