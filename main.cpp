#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 
int main()
{
	vector<int> div;
	int N{}, sum{};

	cin >> N;

	while (N != -1) {
		for (int i = 1; i < N; i++)
		{
			if ((N % i) == 0) { div.push_back(i); sum += i; }

		}
		if (sum != N) { cout << N << " is NOT perfect." << endl; }
		else if (sum == N) {
			cout << N << " = ";
			for (int i = 0; i < div.size(); i++)
			{
				cout << div[i];
				if (i != (div.size() - 1)) cout << " + ";
			}
			cout << endl;
		}

		div.clear();
		sum = 0;
		cin >> N;
	}
	
}