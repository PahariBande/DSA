#include "bits/stdc++.h"
using namespace std;

int PalindromeMaking(vector<int> nums)
{
    int ans = 0;
    for (int i = 0, j = nums.size() - 1; i <= j;)
    {
        if (nums[i] == nums[j])
        {
            i++;
            j--;
        }

        else if (nums[i] > nums[j])
        {
            j--;
            nums[j] += nums[j + 1];
            ans++;
        }
        else
        {
            i++;
            nums[i] += nums[i - 1];
            ans++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 4, 5, 1};
    cout << PalindromeMaking(nums);
    return 0;
}