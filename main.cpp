#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    int N{}, M{};
    int num{};
    string checking{};
    vector<string> name;
    map<string, int> poketmon;
    map<int, string> poketmonR;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> name[i];
    }

    sort(name.begin(), name.end());

    for (int i = 0; i < N; i++)
    {
        poketmon[name[i]] = i + 1;
        poketmonR[i + 1] = name[i];
    }

    for (int j = 0; j < M; j++)
    {
        cin >> num || checking;
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