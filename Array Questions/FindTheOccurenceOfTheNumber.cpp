#include "bits/stdc++.h"
using namespace std;

int Occurrences(vector<int> nums, int x)
{
    unordered_map<int, int> mpp;
    unordered_map<int, int>::iterator it;

    for (auto i = 0; i < nums.size(); i++)
        mpp[nums[i]]++;

    it = mpp.find(x);
    return it->second;
}

int main()
{
    vector<int> nums = {0, 10, 5, 8, 20, 1, 1, 1, 1};
    cout << Occurrences(nums, 1);
    return 0;
}