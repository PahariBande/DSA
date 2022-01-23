#include "bits/stdc++.h"
using namespace std;

int PeakElement(vector<int> nums)
{
    int maxx = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
        maxx = max(maxx, nums[i]);

    return maxx;
}

int main()
{
    vector<int> nums = {0, 10, 5, 8, 20, 1};
    cout << PeakElement(nums);
    return 0;
}