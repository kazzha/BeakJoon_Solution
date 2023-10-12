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
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N{}, M{}, count{};
    string name;
    
    cin >> N >> M;

    map<string, bool> hearlook;

    for (int i = 0; i < N; i++)
    {
        cin >> name;
        hearlook[name] = false;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> name;
        if (hearlook.count(name))
        {
            count++;
            hearlook[name] = true;
        }
    }

    cout << count << '\n';

    for (const auto& entry : hearlook)
    {
        if (entry.second)
        {
            cout << entry.first << '\n';
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