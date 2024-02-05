#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 15650¹ø

int N{}, M{};
int arr[9];
bool visited[9];

void DFS(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == false)
        {
            if (cnt == 0)
            {
                visited[i] = true;
                arr[cnt] = i;
                DFS(cnt + 1);
                visited[i] = false;
            }
            else
            {
                if (arr[cnt - 1] < i)
                {
                    visited[i] = true;
                    arr[cnt] = i;
                    DFS(cnt + 1);
                    visited[i] = false;
                }
                else {}
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> N >> M;

    DFS(0);

}

// 14888¹ø

#include <set>

int N{}, tmp{};
int arr[12];
int middle[12];
vector<int> Operator(4);
vector<int> visited(4);
set<int> ans;

void DFS(int cnt)
{
    if (cnt == N - 1)
    {
        ans.insert(tmp);
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (cnt == 0)
        {
            middle[cnt] = arr[cnt];
        }
        tmp = middle[cnt];

        if (visited[i])
        {
            visited[i]--;
            switch (i)
            {
            case 0:
                tmp += arr[cnt + 1];
                break;
            case 1:
                tmp -= arr[cnt + 1];
                break;
            case 2:
                tmp *= arr[cnt + 1];
                break;
            case 3:
                if (tmp < 0) tmp = (-1 * ((-1 * tmp) / arr[cnt + 1]));
                else tmp /= arr[cnt + 1];
                break;
            default:
                break;
            }
            middle[cnt + 1] = tmp;
            DFS(cnt + 1);

            visited[i]++;
        }

    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> Operator[i];
        visited[i] = Operator[i];
    }

    DFS(0);

    cout << *(--ans.end()) << '\n' << *(ans.begin());
}
