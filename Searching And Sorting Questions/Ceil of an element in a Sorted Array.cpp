#include "bits/stdc++.h"
using namespace std;

int findCeil(vector<int> nums, int x)
{
    int low = 0, high = nums.size() - 1, res = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x)
            return mid;

        else if (nums[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            res = nums[mid];
            high = mid - 1;
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 8, 10, 20};
    cout << findCeil(nums, 5);
    return 0;
}