#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, count{2};
    cin >> N;

    vector<int> table(N+1);
    vector<int> answer(N+1);

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