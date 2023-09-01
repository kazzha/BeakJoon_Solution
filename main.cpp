#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 
int main()
{
	int N{}, oneWall{1}, dotCount{4};

	cin >> N;
	
	oneWall = oneWall + pow(2,N);
    dotCount = oneWall * oneWall;
	

	cout << dotCount;
}