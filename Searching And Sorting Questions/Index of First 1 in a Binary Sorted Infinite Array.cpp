#include "bits/stdc++.h"
using namespace std;

int firstOccur(vector<int> nums, int l, int h, int key)
{
    int first = -1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] == key)
        {
            first = mid;
            h = mid - 1;
        }
        else if (nums[mid] < key)
            l = mid + 1;

        else
            h = mid - 1;
    }
    return first;
}

int find1(vector<int> nums, int x = 1)
{
    int low = 0, high = 1, val = nums[0];

    while (val < x)
    {
        low = high;
        high = high * 2;
        val = nums[high];
    }
    return firstOccur(nums, low, high, x);
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 1};
    cout << find1(nums);
    return 0;
}