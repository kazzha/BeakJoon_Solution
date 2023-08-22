#pragma once

#include <iostream>

void Practice()
{
    //1008번. 절대 오차와 상대 오차

    double x{}, y{};
    std::cin >> x >> y;
    std::cout.precision(10); //정수 부분 포함, 몇 자리 숫자를 나타낼 것인지 지정하는 함수
    std::cout << x / y;


}
