#pragma once
// 9184번
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> memo;

int Function(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) { return 1; }

    else if (a > 20 || b > 20 || c > 20) {
        if (memo.find("20,20,20") == memo.end()) { memo["20,20,20"] = Function(20, 20, 20); }
        return memo["20,20,20"];
    }
    else if (a < b && b < c)
    {
        string key1 = to_string(a) + "," + to_string(b) + "," + to_string(c - 1);
        string key2 = to_string(a) + "," + to_string(b - 1) + "," + to_string(c - 1);
        string key3 = to_string(a) + "," + to_string(b - 1) + "," + to_string(c);

        if (memo.find(key1) == memo.end())
        {
            memo[key1] = Function(a, b, c - 1);
        }
        if (memo.find(key2) == memo.end())
        {
            memo[key2] = Function(a, b - 1, c - 1);
        }
        if (memo.find(key3) == memo.end())
        {
            memo[key3] = Function(a, b - 1, c);
        }

        return memo[key1] + memo[key2] - memo[key3];
    }
    else
    {
        string key1 = to_string(a - 1) + "," + to_string(b) + "," + to_string(c);
        string key2 = to_string(a - 1) + "," + to_string(b - 1) + "," + to_string(c);
        string key3 = to_string(a - 1) + "," + to_string(b) + "," + to_string(c - 1);
        string key4 = to_string(a - 1) + "," + to_string(b - 1) + "," + to_string(c - 1);

        if (memo.find(key1) == memo.end())
        {
            memo[key1] = Function(a - 1, b, c);
        }
        if (memo.find(key2) == memo.end())
        {
            memo[key2] = Function(a - 1, b - 1, c);
        }
        if (memo.find(key3) == memo.end())
        {
            memo[key3] = Function(a - 1, b, c - 1);
        }
        if (memo.find(key4) == memo.end())
        {
            memo[key4] = Function(a - 1, b - 1, c - 1);
        }

        return memo[key1] + memo[key2] + memo[key3] - memo[key4];
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a{}, b{}, c{};

    while (true)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            return 0;
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << Function(a, b, c) << '\n';

    }
}

// 1149번
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, index{};

    cin >> N;

    vector<int> cost(3);
    vector<vector<int>> house(N + 1, vector<int>(3));

    for (int i = 1; i <= N; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];

        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cost[0];
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cost[1];
        house[i][2] = min(house[i - 1][0], house[i - 1][1]) + cost[2];
    }

    cout << *min_element(house[N].begin(), house[N].end());


}


// 1932번
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, tmp{};

    cin >> N;

    vector<vector<int>> triangle(N + 1, vector<int>(N + 1));
    vector<vector<int>> save(N + 1, vector<int>(N + 1));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> triangle[i][j];
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            save[i][j] = max(save[i - 1][j - 1], save[i - 1][j]) + triangle[i][j];
        }
    }

    cout << *max_element(save[N].begin(), save[N].end());
}

// 2579번. 계단 오르기
int main()
{

    int ans[301] = { 0, };

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};

    cin >> N;
    vector<int> stair(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> stair[i];
    }

    ans[1] = stair[1];
    ans[2] = stair[1] + stair[2];
    ans[3] = max(stair[1], stair[2]) + stair[3];

    for (int i = 4; i <= N; i++)
    {
        ans[i] = max(ans[i - 3] + stair[i - 1], ans[i - 2]) + stair[i];
    }

    cout << ans[N];

}

// 11053번 가장 긴 증가하는 부분 수열

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    cin >> N;

    vector<int> table(N);
    vector<int> answer(N);

    for (int i = 0; i < N; i++)
    {
        cin >> table[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (table[i] > table[j])
            {
                answer[i] = max(answer[i], answer[j]);
            }
        }
        answer[i]++;
    }

    cout << *max_element(answer.begin(), answer.end());

}

// 2156번. 포도주 시식

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, count{ 2 };
    cin >> N;

    vector<int> table(N + 1);
    vector<int> answer(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> table[i];
    }

    answer[1] = table[1];

    if (N > 1)
    {
        answer[2] = table[1] + table[2];
    }

    if (N > 2)
    {
        for (int i = 3; i <= N; i++)
        {
            answer[i] = max(answer[i - 2] + table[i], answer[i - 3] + table[i - 1] + table[i]);
            answer[i] = max(answer[i], answer[i - 1]);
        }
    }

    cout << answer[N];

}

// 11053번 가장 긴 증가하는 부분 수열

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    cin >> N;

    vector<vector<int>> DP(N + 1, vector<int>(10));

    for (int i = 1; i < 10; i++)
    {
        DP[1][i] = 1;
    }

    if (N > 1)
    {
        for (int i = 2; i <= N; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (j == 0)
                {
                    DP[i][j] = DP[i - 1][j + 1];
                }
                else if (j == 9)
                {
                    DP[i][j] = DP[i - 1][j - 1];
                }
                else
                {
                    DP[i][j] = DP[i - 1][j + 1] + DP[i - 1][j - 1];
                }

                DP[i][j] %= 1000000000;
            }
        }
    }

    long long ans{};

    for (int i = 0; i < 10; i++)
    {
        ans += DP[N][i];
    }

    cout << ans % 1000000000;
}

// 11054번 가장 긴 바이토닉 부분 수열

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    cin >> N;

    vector<int> table(N + 1, 1);
    vector<int> DP_P(N + 1, 1);
    vector<int> DP_M(N + 1, 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> table[i];
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            if (table[i] > table[j])
            {
                DP_P[i] = max(DP_P[i], DP_P[j] + 1);
            }
        }
    }

    for (int i = N - 1; i > 0; i--)
    {
        for (int j = i + 1; j <= N; j++)
        {
            if (table[i] > table[j]) {
                DP_M[i] = max(DP_M[i], DP_M[j] + 1);
            }
        }
    }

    int ans{};

    for (int i = 1; i <= N; i++)
    {
        ans = max(ans, DP_M[i] + DP_P[i] - 1);
    }

    cout << ans;
}

// 2565번 전깃줄
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    cin >> N;

    vector<pair<int, int>> table(N + 1);
    vector<int> DP(N + 1, 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> table[i].first >> table[i].second;
    }

    sort(table.begin(), table.end());

    for (int i = 2; i <= N; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            if (table[i].first >= table[j].first && table[i].second >= table[j].second)
            {
                DP[i] = max(DP[i], DP[j] + 1);
            }

        }
    }


    int ans{};

    for (int i = 1; i <= N; i++)
    {
        ans = max(ans, DP[i]);
    }

    cout << N - ans;


}

// 9251번 LCS
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string str1, str2;

    cin >> str1 >> str2;

    vector<vector<int>> DP(str1.size() + 1, vector<int>(str2.size() + 1));

    for (int i = 1; i <= str1.size(); i++)
    {
        for (int j = 1; j <= str2.size(); j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                DP[i][j] = DP[i - 1][j - 1] + 1;
            }
            else
            {
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
    }

    cout << DP[str1.size()][str2.size()];

}

// 12865 평범한 배낭(냅색)
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, wight{};

    cin >> N >> wight;

    vector<pair<int, int>> back(N);
    vector<vector<int>> table(N + 1, vector<int>(wight + 1));

    for (int i = 0; i < N; i++)
    {
        cin >> back[i].first >> back[i].second;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= wight; j++)
        {
            if (j >= back[i - 1].first)
            {
                table[i][j] = max(back[i - 1].second + table[i - 1][j - back[i - 1].first], table[i - 1][j]);
            }
            else
            {
                table[i][j] = table[i - 1][j];
            }
        }
    }

    cout << table[N][wight];
}
