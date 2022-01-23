#include "bits/stdc++.h"
using namespace std;

vector<int> trippletSum(vector<int> nums, int sum)
{
    vector<int> trippleSum;
    for (auto i = 0; i < nums.size() - 2; i++)
    {
        unordered_set<int> sett;
        int curr_sum = sum - nums[i];
        for (auto j = i + 1; j < nums.size(); j++)
        {
            if (sett.find(curr_sum - nums[j]) != sett.end())
            {
                trippleSum.push_back(nums[i]);
                trippleSum.push_back(nums[j]);
                trippleSum.push_back(curr_sum);
            }
            sett.insert(nums[j]);
        }
    }
    return trippleSum;
}

vector<int> trippletSumAnother(vector<int> nums, int sum)
{
    sort(nums.begin(), nums.end());
    vector<int> trippleSum;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int low = i + 1, high = nums.size() - 1;
        while (low <= high)
        {
            if (nums[i] + nums[low] + nums[high] == sum)
            {
                trippleSum.push_back(nums[i]);
                trippleSum.push_back(nums[low]);
                trippleSum.push_back(nums[high]);
            }

            else if (nums[i] + nums[low] + nums[high] < sum)
                low++;

            else
                high--;
        }
    }
    return trippleSum;
}

int main()
{
    vector<int> nums = {1, 4, 45, 6, 10, 8};
    // vector<int> trippleSum = trippletSum(nums, 22)
    vector<int> trippleSum = trippletSumAnother(nums, 22);
    for (auto j = 0; j < trippleSum.size(); j++)
        cout << trippleSum[j] << " ";
    return 0;
}