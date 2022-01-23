#include "bits/stdc++.h"
using namespace std;

int miniumSwap(vector<int> nums, int k)
{
    int countNum = 0;
    for (auto j = 0; j < nums.size(); j++)
        if (nums[j] < k)
            countNum++;

    int bad = 0;
    for (auto i = 0; i < countNum; i++)
    {
        if (nums[i] > k)
            bad++;
    }
    int ans = bad;

    for (auto i = 0, j = countNum; j < nums.size(); i++, j++)
    {
        if (nums[i] > k)
            --bad;

        if (nums[j] > k)
            ++bad;

        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 9, 5, 8, 7, 4};
    cout << miniumSwap(nums, 6);
    return 0;
}