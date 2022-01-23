#include "bits/stdc++.h"
using namespace std;

int binarySearch(vector<int> nums, int key)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid + 1;

        if (nums[mid] > key)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(nums, 5);
    return 0;
}