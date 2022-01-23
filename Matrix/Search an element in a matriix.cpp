#include "bits/stdc++.h"
using namespace std;

int SearchElements(vector<vector<int>> nums, int target)
{
    int n = nums.size(), m = nums[0].size();
    int low = 0, high = n * m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid / m][mid % m] == target)
            return nums[mid / m][mid % m];

        if (nums[mid / m][mid % m] > target)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << SearchElements(nums, 11);
    return 0;
}