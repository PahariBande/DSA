#include "bits/stdc++.h"
using namespace std;

void RotateArrayBy90Deg(vector<vector<int>> &nums)
{
    int N = nums.size();

    for (auto i = 0; i < N; i++)
        for (auto j = 0; j < i; j++)
            swap(nums[i][j], nums[j][i]);

    // int temp = arr[i][j];
    // arr[i][j] = arr[j][i];
    // arr[j][i] = temp;

    for (auto i = 0; i < N; i++)
        for (auto j = 0; j < N / 2; j++)
            swap(nums[i][j], nums[i][N - j - 1]);

    // int temp = arr[i][j];
    // arr[i][j] = arr[i][N - j - 1];
    // arr[i][N - j - 1] = temp;
}

// 1 2 3
// 4 5 6
// 7 8 9

// 7 4 1
// 8 5 20
// 9 6 3

int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    RotateArrayBy90Deg(nums);
    for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums[i].size(); j++)
            cout << nums[i][j] << " ";
    return 0;
}