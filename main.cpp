#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, tmp{}, num{};
    double sum{};
    map<int, int> count;
    vector<int> vector;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        sum += tmp;
        vector.push_back(tmp);
        count[tmp]++;
    }

    sort(vector.begin(), vector.end());
    double ave = round(sum / N);
    if (ave == 0)
    {
        ave == 0;
    }

    cout << ave << endl << vector[N / 2] << endl;

    int maxElement{}, greatFreq{};

    for (auto e : count)
    {
        if (e.second > maxElement)
        {
            maxElement = e.second;
        }
    }

    for (auto e : count)
    {
        if (e.second == maxElement)
        {
            num++;
            greatFreq = e.first;
        }

        if (num == 2)
        {
            break;
        }
    }

    cout << greatFreq << endl;

    if (vector[0] >= 0)
    {
        cout << vector[N - 1] - vector[0];
    }
    else
    {
        cout << vector[N - 1] + abs(vector[0]);
    }


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