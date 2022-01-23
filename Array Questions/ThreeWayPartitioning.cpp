#include "bits/stdc++.h"
using namespace std;

void ThreeWayPartitioning(vector<int> &nums, int a, int b)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid < high)
    {
        if (nums[mid] < a)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] >= a and nums[mid] <= b)
            mid++;

        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 0};
    ThreeWayPartitioning(nums, 1, 2);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << endl;
    return 0;
}