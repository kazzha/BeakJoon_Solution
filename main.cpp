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

    int N{}, tmp{};
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
    double ave = round(sum / N * 10) / 10.0;

    cout << ave << endl << vector[N / 2] << endl;
    int maxElement{};

    for (auto e : count)
    {
        if(e.second >) // map으로 max를 구한다음 한번더 돌면서 count를 셈
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