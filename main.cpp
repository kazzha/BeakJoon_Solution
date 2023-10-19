#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr);
    
    int N{}, K{}, tmp{};
    queue<int> yo;
    vector<int> mem{};
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        yo.push(i);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K - 1; j++)
        {
            tmp = yo.front();
            yo.pop();
            yo.push(tmp);
        }
        mem.push_back(yo.front());
        yo.pop();
    }
    
    cout << '<';
    for (int k = 0; k < N; k++)
    {
        if (k != N - 1) {
            cout << mem[k] << ", ";
        }
        else
        {
            cout << mem[k] << '>';
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