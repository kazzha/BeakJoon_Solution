#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1992번
vector<vector<int>> Quad(64, vector<int>(64));

void DC(int startX, int startY, int size)
{
    for (int i = startX; i < startX + size; i++)
    {
        for (int j = startY; j < startY + size; j++)
        {
            if (Quad[startX][startY] != Quad[i][j])
            {
                cout << '(';

                DC(startX, startY, size / 2);
                DC(startX, startY + size / 2, size / 2);
                DC(startX + size / 2, startY, size / 2);
                DC(startX + size / 2, startY + size / 2, size / 2);

                cout << ')';
                return;
            }
        }
    }

    cout << Quad[startX][startY];
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{};
    string n;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        for (int j = 0; j < N; j++)
        {
            Quad[i][j] = n[j] - '0';
        }
    }

    DC(0, 0, N);

}

////////////////////////////////

// 1629번
int DC(int A, int B, int C)
{
    if (B == 1) return A % C;

    long long tmp = DC(A, B / 2, C) % C;

    // 예를 들면 7을 2로 나눈 몫은 3으로, 3+3이 되면 1이 모자라므로 A를 한번 더 곱해줌
    if (B % 2) return tmp * tmp % C * A % C;
    else return tmp * tmp % C;

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A{}, B{}, C{};
    cin >> A >> B >> C;

    cout << DC(A, B, C);
}

///////////////

// 2740번 행렬 곱셈
int vec1[100][100];
int vec2[100][100];
int ans[100][100];

void DC(int N, int M, int K)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            for (int k = 0; k < M; k++)
            {
                ans[i][j] += vec1[i][k] * vec2[k][j];
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N{}, M{}, K{};

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> vec1[i][j];
        }
    }

    cin >> M >> K;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cin >> vec2[i][j];
        }
    }

    DC(N, M, K);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }


}
