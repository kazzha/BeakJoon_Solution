#include <iostream>

int main()
{
    //1008번. 절대 오차와 상대 오차

    double x{}, y{};
    std::cin >> x >> y;
    std::cout.precision(10);
    std::cout << x / y;
}