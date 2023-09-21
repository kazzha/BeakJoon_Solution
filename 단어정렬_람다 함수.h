#pragma once
// 1181번
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>


using namespace std;

bool CompareS(const string& a, const string& b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N{};

    cin >> N;

    vector<string> str(N);

    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
    }

    sort(str.begin(), str.end(), CompareS);

    for (int i = 0; i < N; i++)
    {
        cout << str[i] << '\n';
        while (i < N - 1 && str[i] == str[i + 1]) // 중복된 것은 출력 넘어감
        {
            i++;
        }
    }

}