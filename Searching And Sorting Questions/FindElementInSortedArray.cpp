#include "bits/stdc++.h"
using namespace std;

int find(vector<int> nums, int x)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x)
            return mid;

        else if (nums[mid] - 1 == x)
            return mid - 1;

        else if (nums[mid + 1] == x)
            return mid + 1;

        else if (nums[mid] > x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {5, 10, 30, 20, 40};
    cout << find(nums, 20);
    return 0;
}