#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

/* DFS
vector<int> adj[100001];
int visited[100001];
int Count = 1;

void dfs(int node) {
    for (auto next : adj[node])
    {
        if (visited[next] != 0) continue;
        visited[next] = Count++;
        dfs(next);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, R{};

    cin >> N >> M >> R;

    for (int i = 0; i < M; i++)
    {
        int vertex{}, edge{};
        cin >> vertex >> edge;
        adj[vertex].push_back(edge);
        adj[edge].push_back(vertex);
    }

    for (int i = 0; i <= N; i++)
    {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    visited[R] = Count++;
    dfs(R);

    for (int i = 1; i <= N; i++)
    {
        cout << visited[i] << '\n';
    }


}

*/

/*BFS
using namespace std;

vector<int> adj[100001];
int visited[100001];
int Count = 1;


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, R{};

    cin >> N >> M >> R;

    for (int i = 0; i < M; i++)
    {
        int vertex{}, edge{};
        cin >> vertex >> edge;
        adj[vertex].push_back(edge);
        adj[edge].push_back(vertex);
    }

    for (int i = 0; i <= N; i++)
    {
        sort(adj[i].begin(), adj[i].end(),greater<int>());
    }

    visited[R] = Count++;
    queue<int> queue;
    queue.push(R);

    while (!queue.empty())
    {
        int current_vertex = queue.front();
        queue.pop();

        for (auto now : adj[current_vertex])
        {
            if (visited[now] != 0) continue;
            visited[now] = Count++;
            queue.push(now);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << visited[i] << '\n';
    }

}
*/

/* 2667번 2차원 배열 그래프에서 순회하기

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int graph[26][26];
bool visited[26][26];
int Count{};
int N{};
vector<int> DR{ 1, 0, -1, 0 }; // 위 왼 아래 오
vector<int> DC{ 0, -1, 0, 1 };

void DFS(int row, int col)
{
    for (int i = 0; i < 4; i++)
    {
        int nr = row + DR[i];
        int nc = col + DC[i];
        if (nr < 1 || nr > N || nc < 1 || nc > N) continue;

        if (!visited[nr][nc] && graph[nr][nc])
        {
            visited[nr][nc] = true;
            Count++;
            DFS(nr, nc);
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tmp{};
    vector<int> answer;
    cin >> N;
    string str;
    cin.ignore();

    for (int i = 1; i <= N; i++)
    {
        getline(std::cin, str);
        for (int j = 1; j <= N; j++)
        {
            if (str[j-1]=='1')
            {
                graph[i][j] = 1;
            }
        }

        str.clear();
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (!visited[i][j] && graph[i][j])
            {
                visited[i][j] = true;
                Count++;
                DFS(i, j);
                answer.push_back(Count);
                Count = 0;
            }
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << '\n';
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << '\n';
    }
}

*/

/* 2178번 미로 탐색(BFS)
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

*/