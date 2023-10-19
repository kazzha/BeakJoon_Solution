#pragma once
// 12789¹ø
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    stack<int> student;
    int T{}, num{}, order{ 1 };

    cin >> T;

    while (T--)
    {
        cin >> num;

        if (num == order) { order++; }
        else { student.push(num); }

        while (!student.empty() && student.top() == order)
        {
            student.pop();
            order++;
        }
    }

    if (student.empty()) { cout << "Nice"; }
    else { cout << "Sad"; }

}