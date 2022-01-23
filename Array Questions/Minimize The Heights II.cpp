#include "bits/stdc++.h"
using namespace std;

int MinimizeTheHeight_1(vector<int> nums, int k)
{
    sort(nums.begin(), nums.end());
    int minn = INT_MAX, maxx = INT_MIN;
    int smallest = nums[0] + k;
    int largest = nums[nums.size() - 1] - k;
    int ans = nums[nums.size() - 1] - nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        minn = min(smallest, nums[i + 1] - k);
        maxx = max(largest, nums[i] + k);

        if (minn < 0)
            continue;

        ans = min(ans, maxx - minn);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 5, 8, 10};
    int k = 2;
    cout << MinimizeTheHeight_1(nums, k);
    return 0;
}