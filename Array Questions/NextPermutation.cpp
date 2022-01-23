#include "bits/stdc++.h"
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int i = 0, j = 0, n = nums.size();

    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
            break;
    }

    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    else
    {
        for (j = n - 1; j > i; j--)
            if (nums[j] > nums[i])
                break;
    }
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i];

    return 0;
}