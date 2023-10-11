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
    int num{};
    cin >> num;
    string name, checking;

    map<string, bool> company;

    for (int i = 0; i < num; i++)
    {
        cin >> name >> checking;
        if (checking == "enter")
        {
            company[name] = true;
        }
        else if (checking == "leave")
        {
            company[name] = false;
        }
    }

    for (auto it = company.rbegin(); it != company.rend(); ++it)
    {
        if (it->second)
        {
            cout << it->first << '\n';
        }
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