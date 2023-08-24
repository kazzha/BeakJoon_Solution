#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int N{}, M{}, s{}, k{}, l{};

	cin >> N >> M;

	vector<int> basket(N);

	for (int j = 0; j < M; j++) {
		cin >> s >> k >> l;
		for (int i = 0; i <= k-s ; i++)
		{
			basket[s + i -1] = l;
		}
	}

	for (auto e : basket)
	{
		cout << e << " ";
	}
}
	 

