#include "bits/stdc++.h"
using namespace std;

bool isValid(vector<int> nums, int mid, int m)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > mid)
            sum += nums[i] - mid;

        if (sum >= mid)
            return true;
    }
    return false;
}

int minWood(vector<int> &nums, int m)
{
    int low = 0, high = *max_element(nums.begin(), nums.end());
    int res = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(nums, mid, m))
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return res;
}

int main()
{
    vector<int> nums = {4, 42, 40, 26, 46};
    cout << minWood(nums, 20);
    return 0;
}