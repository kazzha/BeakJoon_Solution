#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Practice()
{
    //1008��. ���� ������ ��� ����
    double x{}, y{};
    cin >> x >> y;
    cout.precision(10); //���� �κ� ����, �� �ڸ� ���ڸ� ��Ÿ�� ������ �����ϴ� �Լ�
    cout << x / y;

    //15552��. ����� ������ �ϱ�
    std::ios_base::sync_with_stdio(false); // c++��Ÿ�� ����� ���ۿ� c��Ÿ�� ����� ���� ������ ����ȭ�� ����
    std::cin.tie(nullptr); // cin/cout ������ ���� ��� ���� ���� ������ ��

    //10952��. ũ�Ⱑ �������� ���� ���ʹ� �ε����� �� �� ����. push_back ����
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

	//10951��. cin.eof() ����

	vector<int> A{}, B{};

	int i{}, a{}, b{};

	//eof()�Լ��� �� ���� ������ ��ĵ�ؼ� ������ false ��ȯ
	//�׷��� ������ !(cin >> a >> b).eof())�̷��� �ؾ��Ѵ�. !(cin.eof())�� Ʋ��
	while (cin >> a >> b)
	{
		A.push_back(a);
		B.push_back(b);

		cout << A[i] + B[i] << endl;
		i++;
	}

	//10818��. minmax�� ����
	// ���� pair<int,int>��� ����������, pair<vecter<int>::iterator,vecter<int>::iterat0r>��
	auto result = minmax_element(A.begin(), A.end());

	cout << *result.first << " " << *result.second;
	//iterator�� ������ ������������ ��� . minmax ����: �ʹ� ���� �ð��� �ɸ�
}
