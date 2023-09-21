#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N{};

    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++)
    {
        cin >> points[i].second >> points[i].first;
    }

    sort(points.begin(), points.end());

    for (int i = 0; i < N; i++)
    {
        cout << points[i].second << " " << points[i].first << '\n';
    }

    return 0;
}