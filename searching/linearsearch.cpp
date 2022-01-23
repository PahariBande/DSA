#include "bits/stdc++.h"
using namespace std;

void linear_search(vector<int> nums, int key)
{
    for (auto i = 0; i < nums.size(); i++)
        if (nums[i] == key)
        {
            cout << "Element found at " << i + 1 << " position" << endl;
            return;
        }

    cout << "Element not present in the list" << endl;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7};
    int key = 5;
    linear_search(nums, key);
    return 0;
}