#pragma once
// 18870¹ø
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
    int N{}, num{};

    cin >> N;

    vector<int> points, compare;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        points.push_back(num);
        compare.push_back(num);
    }

    sort(compare.begin(), compare.end());
    compare.erase(unique(compare.begin(), compare.end()), compare.end());

    for (int j = 0; j < N; j++)
    {
        cout << lower_bound(compare.begin(), compare.end(), points[j]) - compare.begin() << " ";
    }



}