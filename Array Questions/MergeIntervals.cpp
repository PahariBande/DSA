#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> MergeIntervals(vector<vector<int>> &nums)
{
    vector<vector<int>> result;
    // base case when threr are no intervals
    if (interval.size() == 0)
        return result;
    // sort takes O(nlogn) time
    sort(interval.begin(), interval.end());
    // insert the the the first interval in the result
    result.push_back(interval[0]);
    int j = 0;
    // Traverse the whole vector .Takes O(n) time
    for (int i = 1; i < interval.size(); i++)
    {
        // if intevals are overlapping
        if (result[j][1] >= interval[i][0])
            result[j][1] = max(result[j][1], interval[i][1]);
        // else they are not overlapping
        else
        {
            j++;
            result.push_back(interval[i]);
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = MergeIntervals(nums);
    for (auto i = 0; i < nums.size(); i++)
        for (auto j = 0; j < nums.size(); j++)
            cout << ans[i][j];
}