#include "bits/stdc++.h"
using namespace std;

void CommonElements(vector<vector<int>> &nums)
{
    unordered_map<int, int> mapp;

    for (auto i = 0; i < nums[0].size(); i++)
        mapp[nums[0][i]]++;

    for (auto i = 1; i < nums.size(); i++)
    {
        for (auto j = 0; j < nums[i].size(); j++)
        {
            if (mapp[nums[i][j]] == i)
            {
                mapp[nums[i][j]] = i + 1;

                if (i == nums.size() - 1 and mapp[nums[i][j]] == nums.size())
                    cout << nums[i][j] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> nums = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    CommonElements(nums);
    return 0;
}