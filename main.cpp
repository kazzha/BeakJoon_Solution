#include <iostream>
#include <algorithm>
#include <deque>
#include <utility>

using namespace std;

bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr);
    
    deque<pair<int,int>> deq;

    pair<int, int> P, tmp;

    int N{}, num{}, frontnum{};

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        deq.push_back(make_pair(num,i));
    }

    for (int i = 1; i <= N; i++)
    {
        tmp = deq.front();
        if (tmp.first > 0) {
            for (int j = 0; j < tmp.first; j++)
            {
                P = deq.front();
                deq.pop_front();
                if (j != 0)
                {
                    deq.push_back(P);
                }
            }
        }
        else
        {
            // back에서 하면됨! 어차피 -가 head니까
        }
        cout << tmp.second << ' ';
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