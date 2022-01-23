#include "bits/stdc++.h"
using namespace std;

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

            else if (nums[mid] < nums[mid + 1] and nums[mid] > nums[mid - 1])
                low = mid + 1;

            else
                high = mid - 1;
        }
        else if (mid == 0)
        {
            if (nums[0] > nums[1])
                return 0;

            else
                return 1;
        }

        else if (mid == nums.size() - 1)
        {
            if (nums[mid] > nums[nums.size() - 2])
                return nums.size() - 1;

            else
                return nums.size() - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << findPeak(nums);
    return 0;
}