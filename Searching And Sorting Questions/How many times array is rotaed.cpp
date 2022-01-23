#include "bits/stdc++.h"
using namespace std;

int HowManyTimesArrayIsSorted(vector<int> nums)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] <= nums[mid - 1] and nums[mid] <= nums[mid - 1])
            return mid;

        else if (nums[mid] >= nums[low])
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {11, 12, 13, 14, 15, 18, 2, 5, 6, 8};
    cout << HowManyTimesArrayIsSorted(nums);
    return 0;
}