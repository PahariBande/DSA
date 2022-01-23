#include "bits/stdc++.h"
using namespace std;

int binary_search(vector<int> nums, int key, int low, int high)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid;

        if (nums[mid] > key)
            high--;
        else
            low--;
    }
    return -1;
}

int exponentialSearch(vector<int> nums, int key)
{
    if (nums[0] == key)
        return 0;

    int i = 1, n = nums.size();

    while (i < nums.size() and nums[i] <= key)
        i = i * 2;

    return binary_search(nums, key, i / 2, min(i, n - 1));
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << exponentialSearch(nums, 5);
    return 0;
}