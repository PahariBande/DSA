#include "bits/stdc++.h"
using namespace std;

int MaximumProductSubarray(vector<int> nums)
{
    int product = 1, currProduct = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        currProduct *= nums[i];
        product = max(product, currProduct);
        if (currProduct == 0)
            currProduct = 1;
    }
    return product;
}

int main()
{
    vector<int> nums = {6, -3, -10, 0, 2};
    cout << MaximumProductSubarray(nums);
    return 0;
}