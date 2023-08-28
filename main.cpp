#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int N{}, sum{};
	cin >> N;
	char* pC = new char[N];
	for (int i = 0; i < N; i++)
	{
		cin >> pC[i];
		sum += pC[i] - '0';
	}
	
	cout << sum;
	delete[] pC;
}