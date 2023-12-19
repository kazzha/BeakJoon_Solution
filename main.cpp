#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> edges[1001];
bool dfsCheck[1001];
bool bfsCheck[1001];

void DFS(int start)
{
    for (auto now : edges[start])
    {
        if (dfsCheck[now]) continue;

        dfsCheck[now] = true;
        cout << now << ' ';
        DFS(now);
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
        edges[vertex].push_back(edge);
        edges[edge].push_back(vertex);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(edges[i].begin(), edges[i].end());
    }

    dfsCheck[R] = true;
    cout << R << ' ';
    DFS(R);
    
    queue<int> queue;
    queue.push(R);

    cout << '\n';
    while (!queue.empty())
    {
        int current_vertex = queue.front();
        queue.pop();

        if (bfsCheck[current_vertex]) continue;    
        bfsCheck[current_vertex] = true;
        cout << current_vertex << ' ';
        for (auto now : edges[current_vertex])
        {
            if(!bfsCheck[now])
            queue.push(now);
        }
    }
     

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