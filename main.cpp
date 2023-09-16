#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string number;

	cin >> number;

	int num = stoi(number);
	int create{};

	vector<int> value(number.size());
	for (int i = 0; i < number.size(); i++)
	{
		value[i] = static_cast<int>(number[i]-'0');
	}
	for (int i = 1; i < num; i++)
	{
		create = i;
		for (int j = 0; j < value.size(); j++)
		{
			create += value[j];
		}
		if (create == num)
		{
			cout << i;
			break;
		}
		if (i == num - 1)
		{
			cout << 0;
		}
	}
	

	
}