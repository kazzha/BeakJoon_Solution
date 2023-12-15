#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N{}, M{}, start{};
    cin >> N >> M;
    vector<vector<int>> numbers(N, vector<int>(N));
    vector<vector<int>> sums(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> numbers[i][j];
            if (j == 0) {
                sums[i][j] = numbers[i][j];
            }
            else
            {
                sums[i][j] = sums[i][j - 1] + numbers[i][j];
            }
        }
    }
    
    int x1{}, x2{}, y1{}, y2{}, ans{};

    for (int i = 0; i < M; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j <= x2; j++)
        {
            if (y1 - 2 >= 0)
                ans += sums[j - 1][y2 - 1] - sums[j - 1][y1 - 2];

            else
                ans += sums[j - 1][y2 - 1];
        }

        cout << ans << '\n';
        ans = 0;
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