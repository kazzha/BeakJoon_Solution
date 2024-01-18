#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[128][128]{};
int White{}, Blue{};

void DC(int index, int start, int end)
{
    bool flag = false;
    int prev{arr[start][end]};
    for (int i = start; i < start+index; i++)
    {
        for (int j = end; j < end+index; j++)
        {
            if (prev != arr[i][j])
            {
                flag = true;
                break;
            }
            else { prev = arr[i][j]; }
        }
    }

    index /= 2;

    if (flag)
    {
        DC(index, start, end);
        DC(index, start + index, end);
        DC(index, start, end + index);
        DC(index, start + index, end + index);
    }
    else
    {
        if (prev == 0)
        {
            White++;
        }
        else
        {
            Blue++;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, tmp{};

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    DC(N, 0, 0);

    cout << White << '\n' << Blue;
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