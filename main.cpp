#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int a1, int a0, int c, int n0)
{
	
    if (c-a1 <0 || (a1 * n0) + a0 > c * n0) { return false; }
	
	return true;
}

int main()
{
	int a1{}, a0{}, c{}, n0{};

	cin >> a1 >> a0 >> c >> n0;
	cout << f(a1, a0, c, n0);
}