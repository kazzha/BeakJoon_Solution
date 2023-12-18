#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int recursion(const char* s, int l, int r, int check) {
    if (l >= r) { check++; return check; }
    else if (s[l] != s[r]) {check++; return check;}
    else { check++;  return recursion(s, l + 1, r - 1, check); }
}

int isPalindrome(const char* s , int checkI) {
        return recursion(s, 0, strlen(s)-1, checkI);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int count{};
    
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int num{};
        string input;
        cin >> input;
        if(isPalindrome(input.c_str(), num) > (input.size() / 2))
        {
            cout << 1 << ' ' << isPalindrome(input.c_str(), num) << '\n';
        }
        else
        {
            cout << 0 << ' ' << isPalindrome(input.c_str(), num) << '\n';
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