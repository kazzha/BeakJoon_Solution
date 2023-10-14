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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N{}, M{};
    cin >> N;
    stack<int> ST;
    for(int i=0; i<N; i++)
    {
        cin >> M;
        switch (M)
        {
            {
        case 1:
            int X{};
            cin >> X;
            ST.push(X);
            break;
            }
        case 2:
            if (ST.empty()) { cout << -1 << '\n'; }
            else {  cout << ST.top() << '\n'; ST.pop(); }
            break;
        case 3:
            cout << ST.size() << '\n';
            break;
        case 4: 
            if (ST.empty()) { cout << 1 << '\n'; }
            else { cout << 0 << '\n'; }
            break;
        case 5:
            if (!ST.empty()) { cout << ST.top() << '\n'; }
            else { cout << -1 << '\n'; }
        default:
            break;
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