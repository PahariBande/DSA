#include "bits/stdc++.h"
using namespace std;

int bs(vector<int> nums, int l, int h, int key)
{
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
            l = mid + 1;

        else
            h = mid - 1;
    }
    return -1;
}

int findEle(vector<int> nums, int key)
{
    int low = 0, high = 1, value = nums[0];

    while (value < key)
    {
        low = high;
        high = 2 * high;
        value = nums[high];
    }
    return bs(nums, low, high, key);
}

int main()
{
    vector<int> nums = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    cout << findEle(nums, 5);
    return 0;
}