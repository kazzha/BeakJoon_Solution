#pragma once

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int N{}, max{ 1 }, num{};
	cin >> N;

	vector<int> accum(10001);

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		accum[num]++;

		if (num > max)
		{
			max = num;
		}
	}


	for (int i = 1; i < max + 1; i++)
	{
		for (int j = 0; j < accum[i]; j++)
		{
			if (accum[i] != 0)
			{
				cout << i << '\n';
			}
		}
	}

}
