#include "bits/stdc++.h"
using namespace std;

void selectionSort(vector<int> &nums)
{
    for (auto i = 0; i < nums.size() - 1; i++)
    {
        for (auto j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[i])
                swap(nums[j], nums[i]);
        }
    }
}

int main()
{
    vector<int> nums = {1, 10, 8, 7, 5, 2, 12};
    selectionSort(nums);
    for (auto i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}

//TC O(n^2)