#include "bits/stdc++.h"
using namespace std;

int RowWithMax1(vector<vector<int>> nums)
{
    int max1 = INT_MIN, m = nums[0].size(), row = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int j = 0;
        while (nums[i][j] < 1)
            j++;

        int count = m - j;

        if (count > max1)
        {
            row = i;
            max1 = count;
        }
    }
    return row;
}

int main()
{
    vector<vector<int>> nums = {{0, 1, 1, 1},
                                {0, 0, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 0}};

    cout << RowWithMax1(nums);
    return 0;
}