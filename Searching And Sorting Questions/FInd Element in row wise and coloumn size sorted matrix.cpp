#include "bits/stdc++.h"
using namespace std;

int findEle(vector<vector<int>> nums, int key)
{
    int i = 0, j = nums[0].size() - 1;

    while ((i >= 0 and i < nums.size() - 1) and (j >= 0 and j < nums[i].size() - 1))
    {
        if (nums[i][j] == key)
            return nums[i][j];

        else if (nums[i][j] > key)
            j--;

        else if (nums[i][j] < key)
            i++;
    }
    return -1;
}

int main()
{
    vector<vector<int>> nums = {{10, 20, 30, 40},
                                {15, 25, 35, 45},
                                {27, 29, 37, 48},
                                {32, 33, 39, 50}};
    cout << findEle(nums, 25);
    return 0;
}