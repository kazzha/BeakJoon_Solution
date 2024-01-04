#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> memo;

int Function(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) { return 1; }

    else if (a > 20 || b > 20 || c > 20) {
        if (memo.find("20,20,20") == memo.end()) { memo["20,20,20"] = Function(20, 20, 20); }
        return memo["20,20,20"];
    }
    else if (a < b && b < c)
    {
        string key1 = to_string(a) + "," + to_string(b) + "," + to_string(c - 1);
        string key2 = to_string(a) + "," + to_string(b - 1) + "," + to_string(c - 1);
        string key3 = to_string(a) + "," + to_string(b - 1) + "," + to_string(c);

        if (memo.find(key1) == memo.end())
        {
            memo[key1] = Function(a, b, c - 1);
        }
        if (memo.find(key2) == memo.end())
        {
            memo[key2] = Function(a, b-1, c - 1);
        }
        if (memo.find(key3) == memo.end())
        {
            memo[key3] = Function(a, b-1, c);
        }
        
        return memo[key1] + memo[key2] - memo[key3];
    }
    else
    {
        string key1 = to_string(a-1) + "," + to_string(b) + "," + to_string(c);
        string key2 = to_string(a-1) + "," + to_string(b - 1) + "," + to_string(c);
        string key3 = to_string(a-1) + "," + to_string(b) + "," + to_string(c-1);
        string key4 = to_string(a - 1) + "," + to_string(b-1) + "," + to_string(c - 1);

        if (memo.find(key1) == memo.end())
        {
            memo[key1] = Function(a-1, b, c);
        }
        if (memo.find(key2) == memo.end())
        {
            memo[key2] = Function(a-1, b - 1, c);
        }
        if (memo.find(key3) == memo.end())
        {
            memo[key3] = Function(a-1, b, c-1);
        }
        if (memo.find(key4) == memo.end())
        {
            memo[key4] = Function(a-1, b - 1, c-1);
        }

        return memo[key1] + memo[key2] + memo[key3] - memo[key4];
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int a{}, b{}, c{};

    while (true)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            return 0;
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << Function(a, b, c) << '\n';
        
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