#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N{}, M{}, numN{}, numM{}, changeW{}, changeB{};

	vector<string> Black
	  { "BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB" };

	vector<string> White{
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
	};

	cin >> N >> M;
	cin.ignore();

	vector<string> board(N);

	for(int i=0; i<N; i++)
	{
		getline(cin, board[i]);
	}

	vector<int> countB{}, countW{};

		for (numN=0; numN <= N - 8; numN++)
		{
			for (numM=0; numM <= M - 8; numM++)
			{
				for (int i = 0; i < 8; i++) {

					for (int j = 0; j < 8; j++)
					{
						if (board[i + numN][j + numM] != Black[i][j])
						{
							changeB++;
						}
						if (board[i + numN][j + numM] != White[i][j])
						{
							changeW++;
						}
					}
					
				}
				countB.push_back(changeB);
				countW.push_back(changeW);
				changeB = 0;
				changeW = 0;
			}
		}

	int resultB = *min_element(countB.begin(), countB.end());
	int resultW = *min_element(countW.begin(), countW.end());

	if (resultB >= resultW) { cout << resultW; }
	else if (resultB < resultW) { cout << resultB; }
}