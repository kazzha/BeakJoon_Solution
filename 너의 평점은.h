#pragma once
// 25206��
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
	string subject, score;
	double Time{}, change{}, totalScore{}, timeScore{};

	map<string, double> ScoreChange{ {"A+", 4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},
		{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0.0},{"P",0.0} };

	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> Time >> score;
		change = ScoreChange[score];
		if (score != "P")
		{
			totalScore += (change * Time);
			timeScore += Time;
		}
	}
	cout.precision(7);
	cout << totalScore / timeScore;
}

 map���� ���� ScoreChange[score] �� ���� Ű�� ����
 -> �� �ڿ� ���ο� Ű�� ��������� �⺻���� ���´�. ex) "P" , 0.0
 �̸� �����ϱ� ���ؼ� if( ScoreChange.find(score) != ScoreChange.end())�� ���� �� ����
 find = ������ �ش� Ű�� �ݺ��� ��ȯ, ������ end() ��ȯ
 *�Ҽ��� �Ʒ� 6�ڸ����� ��Ÿ���� ������� �Ǵ� �������� 10^-4���ϰ� �Ǵ°Ͱ���..
