#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, count{};
    cin >> N >> M;
    vector<long long> line(N);

    for (int i = 0; i < N; i++)
    {
        cin >> line[i];
    }
    long long max = *max_element(line.begin(), line.end());
    long long left{ 1 }, right{ max }, ans{};

    do {
        count = 0;
        long long mid = (left + right) / 2;
        for (auto e : line)
        {
            count += e / mid;
        }
        if (count >= M)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (count < M)
        {
            right = mid - 1;
        }
    } while (left <= right);

    cout << ans;
}
// 2110 공유기 설치
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, C{};
    cin >> N >> C;
    vector<long long> house(N);

    for (int i = 0; i < N; i++)
    {
        cin >> house[i];
    }
    sort(house.begin(), house.end());

    long long left{ 1 }, right{ house[N - 1] }, ans{}, wifi{};

    while (left <= right)
    {
        wifi = 1;
        long long mid = (left + right) / 2;
        long long current_house = house[0];
        for (int i = 1; i < N; i++)
        {
            if (current_house + mid <= house[i])
            {
                wifi++;
                current_house = house[i];
            }
        }

        if (wifi >= C)
        {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;

}