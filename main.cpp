#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<string, int> dictionary;

bool compairVec(const pair<string, int>& A, const pair<string, int>& B)
{
    if (A.second != B.second)
    {
        return A.second > B.second;
    }
    else
    {
        if (A.first.size() != B.first.size())
        {
            return A.first.size() > B.first.size();
        }
        else
        {
            return A.first < B.first;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, K{};

    cin >> N >> M;

    string s;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s.size() >= M)
        {
            dictionary[s]++;
        }
    }

    vector< pair<string, int>> Vec(dictionary.begin(), dictionary.end());

    sort(Vec.begin(), Vec.end(), compairVec);

    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i].first << '\n';
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