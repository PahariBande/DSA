#include "bits/stdc++.h"
using namespace std;

char findCeil(vector<char> &nums, char x)
{
    int low = 0, high = nums.size() - 1;
    char res = 'a';

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x)
            return low = mid + 1;

        else if (nums[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            res = nums[mid];
            high = mid - 1;
        }
    }
    return res;
}

int main()
{
    vector<char> nums = {'c', 'f', 'j'};
    cout << findCeil(nums, 'f');
    return 0;
}