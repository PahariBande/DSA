#include "bits/stdc++.h"
using namespace std;

void findDuplicatesInArray0(vector<int> arr)
{
    for (auto i = 0; i < arr.size(); i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];

        else
            cout << "Repeating Element = " << arr[i] << endl;
    }
}
int findDuplicatesInArray1(vector<int> nums)
{
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    return fast;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 5};
    cout << findDuplicatesInArray1(nums);
    return 0;
}