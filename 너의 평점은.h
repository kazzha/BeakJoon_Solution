#pragma once
// 25206번
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

 map에서 만약 ScoreChange[score] 에 없는 키가 들어가면
 -> 맨 뒤에 새로운 키가 만들어지고 기본값이 들어온다. ex) "P" , 0.0
 이를 방지하기 위해서 if( ScoreChange.find(score) != ScoreChange.end())로 감쌀 수 있음
 find = 있으면 해당 키의 반복자 반환, 없으면 end() 반환
 *소수점 아래 6자리까지 나타내면 절대오차 또는 상대오차가 10^-4이하가 되는것같음..
