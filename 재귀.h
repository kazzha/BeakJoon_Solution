#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 2447�� �����
void star(int row, int col, int num)
{
    if ((row / num) % 3 == 1 && (col / num) % 3 == 1) // row�� 1���ر��� �������� ��, ����� (row, col�� 0~2)->num�� 1��
        // �ƴϸ� ������� ���� (row, col) 3~5�� num�� 3�϶� ���� ����
    {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0) cout << '*';
        else star(row, col, num / 3);  // num�� 3���� ���� ������ �� �۰� �ɰ�
    }
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int num{};

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            star(i, j, num);
        }
        cout << '\n';
    }
}
*/
