#include "bits/stdc++.h"
using namespace std;

int jumpSearch(vector<int> nums, int key)
{
    int n = nums.size();
    int step = sqrt(n);
    int prev = 0;

    while (nums[min(step, n) - 1] < key)
    {
        prev = step;
        step += sqrt(n);

        if (prev >= n)
            return -1;
    }

    while (nums[prev] < key)
    {
        prev++;

        if (prev == min(step, n))
            return -1;
    }

    if (nums[prev] == key)
        return prev;

    return -1;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << jumpSearch(nums, 5);
    return 0;
}