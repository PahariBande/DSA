#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> findSum(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int sum;
    set<vector<int>> sett;

    for (int i = 0; i < nums.size() - 3; i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            if (j > i + 1 and nums[j] == nums[j - 1])
                continue;
            int left = j + 1, right = nums.size() - 1;

            while (left < right)
            {
                sum = nums[i] + nums[j] + nums[left] + nums[right];

                if (sum > target)
                    right -= 1;

                else if (sum == target)
                {
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.push_back(nums[j]);
                    t.push_back(nums[left]);
                    t.push_back(nums[right]);
                    sett.insert(t);
                    left += 1;
                }
                else
                    left += 1;
            }
        }
    }
    vector<vector<int>> ans;
    for (auto i : sett)
        ans.push_back(i);

    return ans;
}

int main()
{
    vector<int> nums = {10, 2, 3, 4, 5, 7, 8};
    vector<vector<int>> ans = findSum(nums, 23);
    for (auto i = 0; i < ans.size(); i++)
    {
        for (auto j = 0; j < ans[i].size(); j++)
            cout << ans[i][j];

        cout << endl;
    }
}