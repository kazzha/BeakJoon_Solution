#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

bool visited[101][101];
int dist[101][101];

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N{}, M{}, answer{};
    string str;
    vector<int> DR{ 1, 0, -1, 0 }; 
    vector<int> DC{ 0, -1, 0, 1 };

    cin >> N >> M;

    vector<vector<int>> miro(N+1, vector<int>(M+1));
   
    
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        getline(cin, str);
        for (int j = 0; j < M; j++)
        {
            if (str[j] == '1')
            {
                miro[i+1][j+1] = 1;
            }
        }
        str.clear();
    }

    queue<pair<int,int>> queue;
    queue.push(make_pair(1,1));
    answer++;
    dist[1][1] = 1;

    while (!queue.empty())
    {
        int current_row = queue.front().first;
        int current_col = queue.front().second;
        queue.pop();

        for (int i = 0; i < 4; i++)
        {
            int dr = current_row + DR[i];
            int dc = current_col + DC[i];

            if (dr < 1 || dr > N || dc <1 || dc > M) continue;


            if (!visited[dr][dc] && miro[dr][dc])
            { 
                dist[dr][dc] = dist[current_row][current_col] + 1;
                visited[dr][dc] = true;
                queue.push(make_pair(dr, dc));
               
            }
        }
    }

    cout << dist[N][M];
}



/*
int main()
{
    int N{}, M{};

    cin >> N;

    vector<int> sangun(N);
    for (int i = 0; i < N; i++)
    {
        cin >> sangun[i];
    }

    cin >> M;
    vector<int> num(M);
    vector<bool> checking(M);

    for (int j = 0; j < M; j++)
    {
        cin >> num[j];
        for (int k = 0; k < N; k++)
        {
            if (num[j] == sangun[k])
            {
                checking[j] = true;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        cout << checking[i] << " ";
    }


}
*/