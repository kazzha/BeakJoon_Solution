#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K{};
int* tmp{}, * nums{};
int cnt{}, ans{ -1 };

void merge(int A[], int start, int mid, int end);
void merge_sort(int A[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(A, start, mid); // ���ݺ� ����
        merge_sort(A, mid + 1, end); // �Ĺݺ� ����
        merge(A, start, mid, end); // ����
    }
}

void merge(int A[], int start, int mid, int end)
{
    int i = start, j = mid + 1, t = 1;
    while (i <= mid && j <= end)
    {
        if (A[i] < A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    // ���� �迭 �κ��� ���� ��� - ũ�Ⱑ 1�� �迭���� �ٽ� �����ϱ� ������
    // �迭 ũ�Ⱑ Ŀ������ �̹� �� �κ��� ������ �Ǿ� ����
    while (i <= mid)
    {
        tmp[t++] = A[i++];
    }

    // ������ �迭 �κ��� ���� ���
    while (j <= end)
    {
        tmp[t++] = A[j++];
    }

    // ����� �迭 A�� ����
    i = start; t = 1;
    while (i <= end)
    {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == K) {
            ans = A[i - 1]; // i�� �������� ++�Ǳ� ����
            break;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int num{}, A{};

    cin >> A >> K;

    nums = new int[A];
    tmp = new int[A];

    for (int i = 0; i < A; i++)
    {
        cin >> num;
        nums[i] = num;
    }

    merge_sort(nums, 0, A - 1);
    cout << ans;


    return 0;
}