#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    int K{}, num{}, sum{};

    cin >> K;

    stack<int> ST;

    for (int i = 0; i < K; i++)
    {
        cin >> num;
        if (num == 0)
        {
            ST.pop();
        }
        else { ST.push(num); }
    }
    
   while(!ST.empty())
    {
        sum += ST.top();
        ST.pop();
    }

    cout << sum;
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