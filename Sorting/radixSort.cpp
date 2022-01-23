#include "bits/stdc++.h"
using namespace std;

void countSort(vector<int> &nums, int exp)
{
    vector<int> output;
    vector<int> count;

    for (auto i = 0; i < nums.size(); i++)
    {
        count[(nums[i] / exp) % 10]++;
    }

    for (auto i = 1; i < nums.size(); i++)
        count[i] += count[i - 1];

    for (auto i = nums.size() - 1; i >= 0; i--)
    {
        output[--count[(nums[i] / exp) % 10]] = nums[i];
    }
    nums = output;
}

void radixSort(vector<int> nums)
{
    int maxx = *max_element(nums.begin(), nums.end());

    for (auto exp = 1; maxx / exp > 0; exp *= 10)
        countSort(nums, exp);
}
int main()
{
    vector<int> nums = {1, 10, 8, 7, 5, 2, 12};
    radixSort(nums);
    for (int i = 0; nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}