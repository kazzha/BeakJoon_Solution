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