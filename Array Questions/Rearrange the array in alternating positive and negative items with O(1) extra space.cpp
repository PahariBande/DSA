#include "bits/stdc++.h"
using namespace std;

void rotate(vector<int> &nums, int start, int end)
{
    int temp = nums[end];

    for (auto i = end - 1; i >= start; i--)
        nums[i + 1] = nums[i];

    nums[start] = temp;
}

void Rearrange(vector<int> &nums)
{
    int i = 0, k = 0, j = 0, n = nums.size() - 1;

    while ((i < nums.size()) and (j < nums.size()) and (k < nums.size()))
    {
        if (k % 2 == 0)
        {
            if (nums[k] >= 0)
            {
                i = k;
                j = k;

                while ((i < n) and nums[i] >= 0)
                    i++;

                if (i >= n)
                    break;

                rotate(nums, j, i);
            }
        }
        else
        {
            i = k;
            j = k;
            while ((j < nums.size()) and nums[j] < 0)
                j++;

            if (j >= n)
                break;

            rotate(nums, i, j);
        }
        k++;
    }
}

int main()
{
    vector<int> nums = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    Rearrange(nums);
    for (auto i : nums)
        cout << i << " ";

    return 0;
}