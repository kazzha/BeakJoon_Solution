#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = str.size();

    vector<string> patterns = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=" };

    for (const string& pattern : patterns)
    {
        size_t index = str.find(pattern);
        while (index != string::npos)
        {
            count--;
            index = str.find(pattern, index + 1);
        }
    }

    cout << count;

    return 0;
}






