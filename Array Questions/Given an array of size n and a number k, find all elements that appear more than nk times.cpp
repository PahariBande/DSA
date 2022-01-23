#include "bits/stdc++.h"
using namespace std;

int ElementRepeated(vector<int> nums, int k)
{
    unordered_map<int, int> mapp;
    int x = nums.size() / k;

    for (int i = 0; i < nums.size(); i++)
        mapp[nums[i]]++;

    for (auto i = mapp.begin(); i != mapp.end(); i++)
    {
        if (i->second > x)
            return i->first;
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 1, 2, 2, 1, 2, 3, 3};
    cout << ElementRepeated(nums, 4);
    return 0;
}