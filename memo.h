#pragma once

#include <iostream>
#include <vector>

using namespace std;

void Practice()
{
    //1008번. 절대 오차와 상대 오차

    double x{}, y{};
    std::cin >> x >> y;
    std::cout.precision(10); //정수 부분 포함, 몇 자리 숫자를 나타낼 것인지 지정하는 함수
    std::cout << x / y;

    //15552번. 입출력 빠르게 하기
    std::ios_base::sync_with_stdio(false); // c++스타일 입출력 버퍼와 c스타일 입출력 버퍼 사이의 동기화를 끊음
    std::cin.tie(nullptr); // cin/cout 연동을 끊고 출력 버퍼 비우는 역할을 함

    //10952번. 크기가 정해지지 않은 벡터는 인덱스를 쓸 수 없음. push_back 쓰기
	vector<int> A{};
	vector<int> B{};

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

	vector<int> A{};
	vector<int> B{};

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
}
