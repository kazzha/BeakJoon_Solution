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

		N -= roof; // 방의 개수 빼기

		roof = 6 * cnt; // 다음에 뺄 방의 개수

		cnt++; // 등차수열을 위해. 그리고 7로 치면 cnt자체가 2기 때문에 바로 출력 가능
	}

	cout << cnt;

}