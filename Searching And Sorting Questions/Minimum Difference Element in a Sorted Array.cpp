#include "bits/stdc++.h"
using namespace std;

int minDiff(vector<int> nums, int key)
{
    int diff = INT_MAX;
    int floor = 0;
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
        {
            floor = nums[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    int ceil = INT_MIN;

    low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
            low = mid + 1;

        else
        {
            ceil = nums[mid];
            high = mid - 1;
        }
    }

    diff = min(abs(key - floor), abs(key - ceil));
    return diff;
}

int main()
{
    vector<int> nums = {1, 3, 8, 10, 15};
    cout << minDiff(nums, 12);
    return 0;
}