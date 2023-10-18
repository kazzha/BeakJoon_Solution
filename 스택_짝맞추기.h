#pragma once
// 9012¹ø
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T{}, left{}, right{};
    bool num = true;
    cin >> T;

    string checking;


    for (int i = 0; i < T; i++)
    {
        stack<char> test;
        cin >> checking;
        for (int j = 0; j < checking.size(); j++)
        {
            if (checking[j] == '(')
            {
                test.push(checking[j]);
            }
            else
            {
                if (test.empty())
                {
                    test.push(checking[j]);
                    break;
                }
                else
                {
                    test.pop();
                }
            }
        }
        if (test.empty())
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}