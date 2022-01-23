#include "bits/stdc++.h"
using namespace std;

int maxProfit(vector<int> nums)
{
    vector<int> profit(nums.size(), 0);

    int maxPrice = nums[nums.size() - 1];

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        maxPrice = max(maxPrice, nums[i]);

        profit[i] = max(profit[i + 1], maxPrice - nums[i]);
    }

    int minPrice = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        minPrice = min(minPrice, nums[i]);

        profit[i] = max(profit[i - 1], profit[i] + (nums[i] - minPrice));
    }
    return (profit[profit.size() - 1]);
}

int main()
{
    vector<int> nums = {2, 30, 15, 10, 8, 25, 80};
    cout << maxProfit(nums);
    return 0;
}