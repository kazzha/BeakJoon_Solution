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
        merge_sort(A, start, mid); // 전반부 정렬
        merge_sort(A, mid + 1, end); // 후반부 정렬
        merge(A, start, mid, end); // 병합
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

    // 왼쪽 배열 부분이 남은 경우 - 크기가 1인 배열부터 다시 병합하기 때문에
    // 배열 크기가 커질수록 이미 이 부분은 정렬이 되어 있음
    while (i <= mid)
    {
        tmp[t++] = A[i++];
    }

    // 오른쪽 배열 부분이 남은 경우
    while (j <= end)
    {
        tmp[t++] = A[j++];
    }

    // 결과를 배열 A에 저장
    i = start; t = 1;
    while (i <= end)
    {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == K) {
            ans = A[i - 1]; // i가 마지막에 ++되기 때문
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