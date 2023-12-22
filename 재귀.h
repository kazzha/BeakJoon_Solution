#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 2447번 별찍기
void star(int row, int col, int num)
{
    if ((row / num) % 3 == 1 && (col / num) % 3 == 1) // row가 1수준까지 내려왔을 때, 여기는 (row, col이 0~2)->num이 1이
        // 아니면 실행되지 않음 (row, col) 3~5면 num이 3일때 실행 가능
    {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0) cout << '*';
        else star(row, col, num / 3);  // num이 3보다 작지 않으면 더 작게 쪼갬
    }
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int num{};

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            star(i, j, num);
        }
        cout << '\n';
    }
}
*/
