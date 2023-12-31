#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Practice()
{
    //1008번. 절대 오차와 상대 오차
    double x{}, y{};
    cin >> x >> y;
    cout.precision(10); //정수 부분 포함, 몇 자리 숫자를 나타낼 것인지 지정하는 함수
    cout << x / y;

    //15552번. 입출력 빠르게 하기
    std::ios_base::sync_with_stdio(false); // c++스타일 입출력 버퍼와 c스타일 입출력 버퍼 사이의 동기화를 끊음
    std::cin.tie(nullptr); // cin/cout 연동을 끊고 출력 버퍼 비우는 역할을 함

    //10952번. 크기가 정해지지 않은 벡터는 인덱스를 쓸 수 없음. push_back 쓰기
	vector<int> A{}, B{};

	bool checking{ true };
	int i{}, a{}, b{};

	while (checking)
	{
		cin >> a >> b;
		A.push_back(a);
		B.push_back(b);

		if (A[i] == 0 && B[i] == 0)
		{
			break;
		}

		cout << A[i] + B[i] << endl;
		i++;
	}

	//10951번. cin.eof() 문제

	vector<int> A{}, B{};

	int i{}, a{}, b{};

	//eof()함수는 그 다음 파일을 스캔해서 없으면 false 반환
	//그렇기 때문에 !(cin >> a >> b).eof())이렇게 해야한다. !(cin.eof())는 틀림
	while (cin >> a >> b)
	{
		A.push_back(a);
		B.push_back(b);

		cout << A[i] + B[i] << endl;
		i++;
	}

	//10818번. minmax의 형태
	// 나는 pair<int,int>라고 생각했지만, pair<vecter<int>::iterator,vecter<int>::iterat0r>임
	auto result = minmax_element(A.begin(), A.end());

	cout << *result.first << " " << *result.second;
	//iterator기 때문에 역참조형으로 출력 . minmax 단점: 너무 오랜 시간이 걸림

	// 10811번
	std::reverse(시작, 끝) : <algorithm> 헤더 필요.시작부터 끝까지 요소를 역순으로 만들어줌
	시작과 끝에는 iterator를 넣어야 하기 때문에 인덱스를 쓰려면
	reverse(basket.begin() + k - 1, basket.begin() + j); 와 같이 써야한다.
	- string, vector 모두 가능

	// 2908번
	std::stoi(문자열) : 문자열의 각 char를 모아서 하나의 int로 만들어줌

	// 2941번 -
	fine("") 함수의 반환값은 인덱스인데, size_t 타입이다.
	size_t found = str.find(" " or 패턴); 이렇게 할 수 있다.
    
	// 1157번 - 같은 값을 찾고 싶을때, 반복자를 저장하는 법

	int resultValue = *max_element(alpha.begin(), alpha.end());

	vector<vector<int>::iterator> result;

	for (auto it = alpha.begin(); it != alpha.end(); it++)
	{
		if (*it == resultValue)
		{
			result.push_back(it);
		}
	}

	이 반복자로 인덱스 뽑아 내는 법
    size_t index = distance(alpha.begin(), result[0]);
	
	// 2869번 - 달팽이 시간 초과
	// 나눈 값으로 바로 출력하면 시간이 적게 걸린다. (반복문x)

	int A{}, B{}, V{}, Day{};

	cin >> A >> B >> V;

	V -= A;

	if (V % (A - B) == 0) cout << (V / (A - B)) + 1;
	else cout << V / (A - B) + 2;
}

// 3273번
int a[1000001] = {};
bool occur[2000001];
int n, x;

int main(void) {
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> x;

	for (int i = 0; i < n; i++) {
		if (x - a[i] > 0 && occur[x - a[i]]) ans++; // 빼면 그 배열을 true로 만들어서 그 다음에 
		// 그 수가 나타나면 바로 정답으로 간주
		occur[a[i]] = true;
	}
	cout << ans;

}

string str;
cin >> str;
int num{};
cin >> num;
map<char, int> check;
string littlestr{ "abcdefghijklmnopqrstuvwxyz" };
for (int i = 0; i < 27; i++)
{
	check[str[i]] = 0;
}


for (int i = 0; i < num; i++)
{
	char checking; int start{}; int end{};
	cin >> checking >> start >> end;

}


/// <summary>
/// /////////////////////////////////////////
/// </summary>

int N{}, M{}, K{};
cin >> N >> M >> K;
char BW{};

vector<vector<int>> sumsB(N + 1, vector<int>(M + 1));
vector<vector<int>> sumsW(N + 1, vector<int>(M + 1));

for (int i = 1; i < N + 1; i++)
{
	for (int j = 1; j < M + 1; j++)
	{
		cin >> BW;

	}
}

for (int i = K - 1; i <= N - K; i++)
{
	for (int j = K - 1; j <= M - K; j++)
	{

	}
}