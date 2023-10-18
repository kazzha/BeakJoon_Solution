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
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr);
    int T{}, left{}, right{};
    bool num=true;
    cin >> T;

    string checking;
   

    for (int i = 0; i < T; i++)
    { 
        stack<char> test;
        cin >> checking;
        for (int j = 0; j < checking.size(); j++)
        {
            if (checking[j] == '(')
            {
                test.push(checking[j]);
            }
            else
            {
                if (test.empty())
                {
                    test.push(checking[j]);
                    break;
                }
                else
                {
                    test.pop();
                }
            }
        }
        if (test.empty())
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
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