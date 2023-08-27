#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int N{}, M{}, k{}, j{};

	cin >> N >> M;

	vector<int> basket(N);

	for (int i = 0; i < N; i++)
	{
		basket[i] = i + 1;
	}
	for (int i = 0; i < M; i++)
	{
		cin >> k >> j;
		reverse(basket.begin() + k - 1, basket.begin() + j);
	}
	for (auto e : basket)
	{
		cout << e << " ";
	}
}