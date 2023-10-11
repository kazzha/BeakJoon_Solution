#pragma once
// 7785¹ø
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int num{};
    cin >> num;
    string name, checking;

    map<string, bool> company;

    for (int i = 0; i < num; i++)
    {
        cin >> name >> checking;
        if (checking == "enter")
        {
            company[name] = true;
        }
        else if (checking == "leave")
        {
            company[name] = false;
        }
    }

    for (auto it = company.rbegin(); it != company.rend(); ++it)
    {
        if (it->second)
        {
            cout << it->first << '\n';
        }
    }

}