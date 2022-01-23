#include "bits/stdc++.h"
using namespace std;

int MinimumELement(vector<int> nums)
{
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == nums[high])
            high--;

        else if (nums[mid] > nums[high])
            low = mid + 1;

        else
            high = mid;
    }
    return nums[high];
}

int main()
{
    vector<int> nums = {10, 20, 30, 1, 2};
    cout << MinimumELement(nums);
    return 0;
}