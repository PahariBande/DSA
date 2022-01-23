#include "bits/stdc++.h"
using namespace std;

int findEle(vector<int> nums, int pivot, int key)
{
    int low = 0, high = pivot - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid;
        else if (nums[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    low = pivot, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int findPeak(vector<int> nums)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid > 0 and mid < nums.size() - 1)
        {
            if (nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1])
                return mid;

            else if (nums[mid] > nums[mid - 1])
                low = mid + 1;

            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 8, 12, 6};
    int mid = findPeak(nums);
    cout << findEle(nums, mid, 6);
}