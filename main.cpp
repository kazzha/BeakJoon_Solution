#include <iostream>
#include <string>

using namespace std;

int main()
{
	int h{}, m{}, timer{};

	cin >> h >> m;
	cin >> timer;

	h += (m + timer) / 60;

	if (h > 23)
	{
		cout << h - 24 << " " << (m + timer) % 60;
	}
	else {
		cout << h << " " << (m + timer) % 60;
	}
}
