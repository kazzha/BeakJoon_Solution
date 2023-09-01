#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 
int main()
{
	int N{}, roof{ 1 }, cnt{ 1 };

	cin >> N;

	while (true)
	{
		if (N - roof <= 0) { break; }

		N -= roof;

		roof = 6 * cnt;

		cnt++; 
	}

	cout << cnt;
	
}