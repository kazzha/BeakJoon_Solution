#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> num(5);
	int ave{}, sum{};

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}

	sum /= 5;

	int temp{};

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	cout << sum << endl << num[2];


}