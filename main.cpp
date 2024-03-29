#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

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
                tmp += arr[cnt+1];
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




/*
int main()
{
    int N{}, M{};

    cin >> N;

    vector<int> sangun(N);
    for (int i = 0; i < N; i++)
    {
        cin >> sangun[i];
    }

    cin >> M;
    vector<int> num(M);
    vector<bool> checking(M);

    for (int j = 0; j < M; j++)
    {
        cin >> num[j];
        for (int k = 0; k < N; k++)
        {
            if (num[j] == sangun[k])
            {
                checking[j] = true;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        cout << checking[i] << " ";
    }


}
*/