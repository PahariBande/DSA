#include "bits/stdc++.h"
using namespace std;

int interpolationSearch(vector<int> nums, int key)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high and key >= nums[low] and key <= nums[high])
    {
        if (low == high)
        {
            if (nums[low] == key)
                return low;
            return -1;
        }

        int pos = low + (((double)(high - low) / (nums[high] - nums[low]) * (key - nums[low])));

        if (nums[pos] == key)
            return pos + 1;

        if (nums[pos] > key)
            high = pos - 1;

        else
            low = pos + 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << interpolationSearch(nums, 5);
    return 0;
}