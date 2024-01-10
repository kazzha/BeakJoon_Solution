#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    cin >> N;

    vector<int> table(N+1);

    table[1] = 0;
    if (N > 1) {
        table[2] = 1;
            }
     if (N > 2) {
        table[3] = 1;
    }
    

    if (N > 3) {
    for (int i = 4; i <= N; i++)
    {
        table[i] = table[i - 1] + 1;
        if (i % 3 == 0) table[i] = min(table[i], table[i / 3]+1);
        if (i % 2 == 0) table[i] = min(table[i], table[i / 2]+1);
    }
    }
    cout << table[N];
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