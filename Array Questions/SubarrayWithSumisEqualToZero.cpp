#include "bits/stdc++.h"
using namespace std;

bool SubarrayWithSumisEqualToZero(vector<int> nums)
{
    unordered_map<int, int> mapp;
    int sum = 0;

    for (auto i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (mapp.find(sum) != mapp.end())
            return true;
        mapp[nums[i]]++;
    }
    return false;
}

int main()
{
    vector<int> nums = {4, 2, -3, 1, 6};
    cout << SubarrayWithSumisEqualToZero(nums);
    return 0;
}