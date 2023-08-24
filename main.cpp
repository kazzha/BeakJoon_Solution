#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	vector<int> A{};
	vector<int> B{};

	int i{}, a{}, b{};

	while (cin >> a >> b)
	{
		A.push_back(a);
		B.push_back(b);

		cout << A[i] + B[i] << endl;
		i++;
	}
}
