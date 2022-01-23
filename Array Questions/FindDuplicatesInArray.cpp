#include "bits/stdc++.h"
using namespace std;

vector<int> findDuplicatesInArray(vector<int> nums)
{
    unordered_map<int, int> mapp;

    for (int i = 0; i < nums.size(); i++)
        mapp[nums[i]]++;

    vector<int> v;

    for (auto i = mapp.begin(); i != mapp.end(); i++)
    {
        if (i->second > 1)
            v.push_back(i->first);
    }
    if (v.size() < 0)
        v.push_back(-1);

    return v;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 6, 7, 8, 8};
    vector<int> v = findDuplicatesInArray(nums);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}