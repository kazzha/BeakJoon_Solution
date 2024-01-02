#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
            
    int N{}, C{};
    cin >> N >> C;
    vector<long long> house(N);

    for (int i = 0; i < N; i++)
    {
        cin >> house[i];
    }
    sort(house.begin(), house.end());

    long long left{ 1 }, right{ house[N - 1] }, ans{}, wifi{};

    while (left <= right)
    {
        wifi = 1;
        long long mid = (left + right) / 2; 
        long long current_house = house[0];
        for (int i=1; i<N; i++)
        {
            if (current_house + mid <= house[i])
            {
                wifi++;
                current_house = house[i];
            }
        }

        if (wifi >= C)
        {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;

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