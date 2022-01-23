#include "bits/stdc++.h"
using namespace std;

void negativeElementsAtTheEnd(vector<int> &nums)
{
    vector<int> temp(nums.size());
    int j = 0;
    for (auto i = 0; i < nums.size(); i++)
        if (nums[i] >= 0)
            temp[j++] = nums[i];

    for (auto i = 0; i < nums.size(); i++)
        if (nums[i] < 0)
            temp[j++] = nums[i];

    if (j == 0 || j == nums.size())
        return;

    for (auto i = 0; i < nums.size(); i++)
        nums[i] = temp[i];
}

int main()
{
    vector<int> nums = {1, -1, 3, 2, -7, -5, 11, 6};
    negativeElementsAtTheEnd(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    return 0;
}