#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n{}, num{ 666 };
	string tmp;

	cin >> n;

	while (n > 0)
	{
		tmp = to_string(num);
		if (tmp.find("666") != string::npos)
		{
			n--;
		}
		num++;
	}

	cout << tmp;
}