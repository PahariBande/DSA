#include "bits/stdc++.h"
using namespace std;

bool isValid(vector<int> nums, int mid, int k)
{
    int lastCowPosition = nums[0], cows = 1;

    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] - lastCowPosition >= mid)
        {
            cows++;
            lastCowPosition = nums[i];
            if (cows >= k)
                return true;
        }
    }
    return false;
}

int AggressiveCows(vector<int> nums, int k)
{
    if (k > nums.size())
        return -1;

    sort(nums.begin(), nums.end());
    int low = 1, high = nums[nums.size() - 1];
    int res = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(nums, mid, k))
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return res;
}

int main()
{
    vector<int> nums = {4, 2, 1, 3, 6};
    cout << AggressiveCows(nums, 2);
    return 0;
}