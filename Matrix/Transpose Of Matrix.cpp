#include "bits/stdc++.h"
using namespace std;

void TransPoseOfMatrix(vector<vector<int>> &nums)
{
    for (auto i = 0; i < nums.size(); i++)
        for (auto j = i + 1; j < nums[i].size(); j++)
            swap(nums[i][j], nums[j][i]);
}

int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    TransPoseOfMatrix(nums);
    for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums[i].size(); j++)
            cout << nums[i][j] << " ";

    return 0;
}

//  1 2 3
//  4 5 6
//  7 8 9
