#include "bits/stdc++.h"
using namespace std;

pair<int, int> MinAndMaxElementInArray(vector<int> nums)
{
    int maxx = INT_MIN, minn = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        maxx = max(maxx, nums[i]);
        minn = min(minn, nums[i]);
    }
    return {maxx, minn};
}
pair<int, int> AnotherMinAndMaxElementInArray(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    return {nums[nums.size() - 1], nums[0]};
}

int main()
{
    vector<int> nums = {0, 10, 5, 8, 20, 1};
    // pair<int, int> pr = MinAndMaxElementInArray(nums);
    pair<int, int> pr = AnotherMinAndMaxElementInArray(nums);
    cout << "Max Element In Array " << pr.first << endl;
    cout << "Min Element in Array "
         << pr.second << endl;
    return 0;
}