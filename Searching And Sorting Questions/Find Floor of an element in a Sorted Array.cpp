#include "bits/stdc++.h"
using namespace std;

int findFloor(vector<int> nums, int x)
{
    int low = 0, high = nums.size() - 1;
    int res = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x)
        {
            return nums[mid];
        }
        else if (nums[mid] < x)
        {
            res = nums[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 8, 10, 20};
    cout << findFloor(nums, 5);
    return 0;
}