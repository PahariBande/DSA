#include "bits/stdc++.h"
using namespace std;

bool isValid(vector<int> nums, int k, int mid)
{
    int studentnum = 1, sum = 0;

    for (auto i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > mid)
        {
            studentnum++;
            sum = nums[i];
        }

        if (studentnum > k)
            return false;
    }
    return true;
}

int findMinBooks(vector<int> nums, int k)
{
    if (k > nums.size())
        return -1;

    int start = *max_element(nums.begin(), nums.end());
    int sum = 0;
    for (auto i = 0; i < nums.size(); i++)
        sum += nums[i];

    int end = sum, res = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(nums, k, mid))
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}

int main()
{
    vector<int> nums = {12, 34, 67, 90};
    cout << findMinBooks(nums, 2);
    return 0;
}