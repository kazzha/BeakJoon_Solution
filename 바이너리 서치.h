#pragma once
// 14425¹ø
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int C{}, I{}, num{};

    cin >> C >> I;
    vector<string> collect(C);
    string input;

    for (int i = 0; i < C; i++)
    {
        cin >> collect[i];
    }

    sort(collect.begin(), collect.end());

    for (int j = 0; j < I; j++)
    {
        cin >> input;
        if (binary_search(collect.begin(), collect.end(), input))
        {
            num++;
        }
    }

    cout << num;

}