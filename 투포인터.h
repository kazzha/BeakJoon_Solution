#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int X{}, N{};
    cin >> X >> N;
    vector<int> num(X);
    set<int> answer;

    for (auto& n : num)
        cin >> n;

    int start{}, end{ 0 }, sum{}, len{ 1 };

    sum = num[start];
    if (sum >= N)
    {
        cout << len; return 0;
    }

    while (end <= X - 1 && start <= end)
    {
        if (sum < N)
        {
            end++;
            sum += num[end];
            len++;
        }

        if (sum >= N)
        {
            answer.insert(len);
            sum -= num[start]; len--;
            start++;
        }
    }

    if (!answer.empty())
    {
        cout << *min_element(answer.begin(), answer.end());
    }
    else
    {
        cout << 0;
    }

}
