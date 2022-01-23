#include "bits/stdc++.h"
using namespace std;

int SubArrayWithEqual01(vector<int> nums)
{
    unordered_map<int, int> mapp;
    int count = 0, sum = 0;

    for (auto i = 0; i < nums.size(); i++)
        if (nums[i] == 0)
            nums[i] = -1;

    for (auto i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == 0)
            count++;

        if (mapp.find(sum) != mapp.end())
            count += mapp.find(sum)->second;

        mapp[sum]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 0, 0, 1, 0, 1, 1};
    cout << SubArrayWithEqual01(nums);
    return 0;
}