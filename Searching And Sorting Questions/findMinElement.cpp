#include "bits/stdc++.h"
using namespace std;

int findEle(vector<int> nums)
{
    int l = 0, h = nums.size() - 1;
    int ele = -1;
    while (l < h)
    {
        int mid = l + (h - l) / 2;

        if (nums[mid] == nums[h])
            h--;

        else if (nums[mid] > nums[h])
            l = mid + 1;

        else
            h = mid;
    }
    return nums[h];
}

int main()
{
    vector<int> nums = {2, 1, 4, 7, 8, 6};
    cout << findEle(nums);
}