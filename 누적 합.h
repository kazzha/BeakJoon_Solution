#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 25682¹ø
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, K{};
    char tmp;

    cin >> N >> M >> K;

    vector<vector<int>> sumB(N + 1, vector<int>(M + 1));
    vector<vector<int>> sumW(N + 1, vector<int>(M + 1));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> tmp;

            sumB[i][j] = sumB[i - 1][j] + sumB[i][j - 1] - sumB[i - 1][j - 1];
            sumW[i][j] = sumW[i - 1][j] + sumW[i][j - 1] - sumW[i - 1][j - 1];

            if ((i + j) % 2 == 0)
            {
                if (tmp == 'B') { sumW[i][j] += 1; }
                else { sumB[i][j] += 1; }
            }
            else
            {
                if (tmp == 'B') { sumB[i][j] += 1; }
                else { sumW[i][j] += 1; }
            }
        }
    }

    long long ans = K * K;

    for (int i = K; i <= N; i++)
    {
        for (int j = K; j <= M; j++)
        {
            long long minB = sumB[i][j] - sumB[i][j - K] - sumB[i - K][j] + sumB[i - K][j - K];
            long long minW = sumW[i][j] - sumW[i][j - K] - sumW[i - K][j] + sumW[i - K][j - K];
            ans = min(min(minW, minB), ans);
        }
    }

    cout << ans;

}

// 10986¹ø 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, tmp{};

    cin >> N >> M;

    long long sum{}, ans{};
    vector<long long> rem(M);

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        sum += tmp;
        rem[sum % M]++;
        if (sum % M == 0) { ans++; }
    }

    for (int i = 0; i < M; i++)
    {
        ans += rem[i] * (rem[i] - 1) / 2;
    }

    cout << ans;



}