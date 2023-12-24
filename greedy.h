#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    long long count{ 1 }, end{};
    cin >> N;

    vector<pair<long long, long long>> meeting(N);

    for (int i = 0; i < N; i++)
    {
        cin >> meeting[i].second >> meeting[i].first;
    }

    sort(meeting.begin(), meeting.end());

    end = meeting[0].first;

    for (int i = 1; i < N; i++)
    {
        if (meeting[i].second >= end)
        {
            end = meeting[i].first;
            count++;
        }
    }


    cout << count;

}

