#include "bits/stdc++.h"
using namespace std;

void bubbleSort(vector<int> &nums)
{
    for (auto i = 0; i < nums.size() - 1; i++)
    {
        for (auto j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

void AnotherWay(vector<int> &nums)
{
    int counter = 1;
    while (counter < nums.size())
    {
        for (auto i = 0; i < nums.size() - counter; i++)
        {
            if (nums[i] > nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }
        counter++;
    }
}
int main()
{
    vector<int> nums = {1, 10, 8, 7, 5, 2, 12};
    // bubbleSort(nums);
    AnotherWay(nums);
    for (auto i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}
//TC O(n^2)