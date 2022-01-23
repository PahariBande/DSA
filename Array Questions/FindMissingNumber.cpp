//All numbers are contiguous and starting from 1
#include "bits/stdc++.h"
using namespace std;

int MissingNumber(vector<int> nums)
{
    int n = nums.size() + 1;
    int n_elements_sum = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
        sum += nums[i];
    return n_elements_sum - sum;
}

int main()
{
    vector<int> nums = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    cout << MissingNumber(nums);
    return 0;
}