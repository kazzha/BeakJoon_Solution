#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
bool CompareI(const pair<int, string>& a, const pair<int, string>& b)
{

    return a.first < b.first;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N{}, temp{1100000000};

    cin >> N;

    vector<int> points(N);
    vector<int> score(N);

    for (int i = 0; i < N; i++)
    {
        cin >> points[i];
       
    }

    for (int i = 0; i < N; i++)
    {
        temp = points[i];
        for (int j = 0; j < N; j++)
        {
            if (points[j] != temp && points[i] > points[j])
            {
                score[i]++;
                temp = points[j];
            }
        }
        cout << score[i] << " ";
    }

    이걸 카운팅 정렬로 바꾸기

}

*/

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