#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> findSum(vector<int> nums, int sum)
{
    sort(nums.begin(), nums.end());
    int summ;
    set<vector<int>> sett;

    for (int i = 0; i < nums.size() - 3; i++)
    {
        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            for (int k = j + 1; k < nums.size() - 1; k++)
            {
                for (int l = k + 1; l < nums.size(); l++)
                {
                    summ = nums[i] + nums[j] + nums[k] + nums[l];

                    if (summ > sum)
                        break;

                    else if (summ == sum)
                    {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[k]);
                        t.push_back(nums[l]);
                        sett.insert(t);
                    }
                }
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