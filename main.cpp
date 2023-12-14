#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int X{}, N{};
    cin >> X >> N;
    vector<int> num(X);
    set<int> answer;

    for (auto& n : num)
        cin >> n;

    int start{}, end{ 1 }, sum{}, len{1};

    sum = num[start];

    while (start <= end)
    {
        if (sum < N)
        {
            sum += num[end];
            end++; len++;
        }
        else
        {
            answer.insert(len);
            sum -= num[start]; len--;
            start++;
        }
    }

    if (!answer.empty())
    {
        cout << *min_element(answer.begin(), answer.end());
    }
    else
    {
        cout << 0;
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