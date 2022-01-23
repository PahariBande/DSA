#include "bits/stdc++.h"
using namespace std;

int SmallestSubarrayWithSumGreaterThanAGivenValue(vector<int> nums, int sum)
{
    int start = 0, curr_sum = 0, end = 0, min_length = INT_MAX;

    while (end < nums.size())
    {
        while (curr_sum <= sum and end < nums.size())
            curr_sum += nums[end++];

        while (curr_sum > sum and start < nums.size())
        {
            if (end - start < end)
                min_length = end - start;

            curr_sum -= nums[start++];
        }
    }
    return min_length;
}

int main()
{
    vector<int> nums = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    cout << SmallestSubarrayWithSumGreaterThanAGivenValue(nums, 280);
    return 0;
}