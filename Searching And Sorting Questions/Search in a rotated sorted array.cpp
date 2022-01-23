#include "bits/stdc++.h"
using namespace std;

int searchInRotatedAndSortedArray(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] >= nums[start])
        {
            if (target >= nums[start] && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (target <= nums[end] && target > nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 1, 2, 3};
    cout << searchInRotatedAndSortedArray(nums, 6);
    return 0;
}