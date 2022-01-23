#include "bits/stdc++.h"
using namespace std;

void InsertionSort(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int current = nums[i];
        int j = i - 1;

        while (nums[j] > current and j >= 0)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = current;
    }
}

int main()
{
    vector<int> nums = {1, 10, 8, 7, 5, 2, 12};
    InsertionSort(nums);
    for (auto i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}