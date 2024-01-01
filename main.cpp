#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N{}, M{}, tmp{}, min{}, count{};
    cin >> N >> M;
    vector<int> card(N);
    cin >> card[0];
    min = card[0];
    for (int i = 1; i < N; i++)
    {
        cin >> tmp;
        card[i] = tmp;
        if (min > tmp)
        {
            min = tmp;
        }
    }
    min++;
    do {
        count = 0;
        min--;
        for (auto e : card)
        {
            count += e / min;
        }
    } while (count < M);

    cout << min;
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