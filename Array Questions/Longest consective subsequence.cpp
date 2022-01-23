#include "bits/stdc++.h"
using namespace std;

int LongestConsectiveSubsequence(vector<int> &nums)
{
    unordered_set<int> sett;
    for (auto i = 0; i < nums.size(); i++)
        sett.insert(nums[i]);

    int ans = INT_MIN;

    for (auto i = 0; i < nums.size(); i++)
    {
        if (sett.find(nums[i] - 1) == sett.end())
        {
            int j = nums[i];
            while (sett.find(j) != sett.end())
                j++;
            ans = max(j - nums[i], ans);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 6, 1, 9, 4, 5, 3};
    cout << LongestConsectiveSubsequence(nums);
    return 0;
}