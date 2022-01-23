#include "bits/stdc++.h"
using namespace std;

vector<int> UNIONSS(vector<int> num1, vector<int> num2)
{
    unordered_map<int, int> mapp;

    for (auto i = 0; i < num1.size(); ++i)
        mapp[num1[i]]++;

    for (auto i = 0; i < num2.size(); ++i)
        mapp[num2[i]]++;

    vector<int> nums;
    int i = 0;
    for (auto j = mapp.begin(); j != mapp.end(); j++)
        nums[i++] = j->first;

    return nums;
}

int main()
{
    vector<int> num1 = {1, 2, 3, 4, 5};
    vector<int> num2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> nums = UNIONSS(num1, num2);

    for (auto i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";

    return 0;
}