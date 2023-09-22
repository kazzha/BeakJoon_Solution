#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N{};

    cin >> N;

    vector<int> points(N);
    vector<int> score(N);

    for (int i = 0; i < N; i++)
    {
        cin >> points[i];
       
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (points[i] > points[j])
            {
                score[i]++;
            }
        }
        cout << score[i] << " ";
    }

    

}