#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    string sik;
    cin >> sik;

    istringstream iss(sik);
    int num{}, sum{};
    char op{'+'};
    bool minus = false;

    iss >> num;
    sum += num;

    while (iss >> op >> num)
    {
        if(op == '-')
        {
            minus = true;
        }

        if(op == '-' || minus)
        {
            sum -= num;
        }
        else
        {
            sum += num;
        }
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