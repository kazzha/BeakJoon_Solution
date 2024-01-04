#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MaxSum(const vector<int>& num)
{
    int Current_max{num[0]};
    int answer{num[0]};

    for (int i=1; i<num.size(); i++)
    {
        Current_max = max(num[i], Current_max + num[i]);
        answer = max(Current_max, answer);
    }

    return answer;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N{};
    cin >> N;
    vector<int> input(N);

    for (int i=0; i<N; i++)
    {
        cin >> input[i];
    }

    cout << MaxSum(input);
    
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