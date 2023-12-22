#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

using int_vector = vector<int>;

shared_ptr<int_vector> DPsuger(const vector<int>& con, int sum)
{
    vector<shared_ptr<int_vector>> sums(sum+1, nullptr);
    sums[0] = make_shared<vector<int>>(0);
    for (int i = 0; i <= sum; i++)
    {
        if (sums[i] != nullptr)
        {
            for (auto e : con)
            {
                if (i + e <= sum)
                {
                    if (sums[i + e] == nullptr || sums[i + e]->size() - 1 > sums[i]->size())
                    {
                        sums[i + e] = make_shared<vector<int>>(*sums[i]);
                        sums[i + e]->push_back(e);
                    }
                }
            }
        }
    }

        return sums[sum];
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k{};

    cin >> k;

    vector<int> bonji{ 3,5 };
    
    auto answer = DPsuger(bonji, k);

    if (answer == nullptr)
    {
        cout << -1;
    }
    else
    {
        cout << answer->size();
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