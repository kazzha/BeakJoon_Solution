#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    long long count{1}, end{};
    cin >> N;
    
    vector<pair<long long, long long>> meeting(N);

    for (int i = 0; i < N; i++)
    {
        cin >> meeting[i].second >> meeting[i].first;
    }

    sort(meeting.begin(), meeting.end());
    
    end = meeting[0].first;

    for (int i = 1; i < N; i++)
    {
        if (meeting[i].second >= end)
        {
            end = meeting[i].first;
            count++;
        }
    }
    

    cout << count;

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