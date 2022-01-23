#include "bits/stdc++.h"
using namespace std;

int FirstRepeatedElement(vector<int> arr)
{
    int N = 1e6 + 2;
    vector<int> nums(N);
    int minIndex = INT_MAX;

    for (auto i = 0; i < nums.size(); i++)
        nums[i] = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (nums[arr[i]] != -1)
            minIndex = min(minIndex, nums[arr[i]]);

        nums[arr[i]] = i;
    }
    if (minIndex == INT_MAX)
    {
        return -1;
    }
    return minIndex + 1;
}

int main()
{
    vector<int> nums = {1, 5, 3, 4, 3, 5, 6};
    cout << FirstRepeatedElement(nums);
    return 0;
}