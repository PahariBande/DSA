#include "bits/stdc++.h"
using namespace std;

int ChocolateDistribution(vector<int> nums, int m)
{
    sort(nums.begin(), nums.end());
    int mindiff = INT_MAX;

    for (auto i = 0; i + m - 1 < nums.size(); i++)
    {
        int diff = nums[i + m - 1] - nums[i];
        mindiff = min(mindiff, diff);
    }
    return mindiff;
}

int main()
{
    vector<int> nums = {3, 4, 1, 9, 56, 7, 9, 12};
    cout << ChocolateDistribution(nums, 5);
    return 0;
}