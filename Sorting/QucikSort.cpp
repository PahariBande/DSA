#include "bits/stdc++.h"
using namespace std;

int partitionArray(vector<int> &nums, int l, int r)
{
    // for (auto i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;

    int pivot = nums[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[r]);
    return i + 1;
}

void QuickSort(vector<int> &nums, int l, int r)
{
    if (l < r)
    {
        int pi = partitionArray(nums, l, r);
        QuickSort(nums, l, pi - 1);
        QuickSort(nums, pi + 1, r);
    }
}

int main()
{
    vector<int> nums = {1, 10, 8, 7, 5, 2, 12};
    QuickSort(nums, 0, 7);
    for (int i = 0; i < 7; i++)
        cout << nums[i] << " ";

    return 0;
}