#include "bits/stdc++.h"
using namespace std;

void AlternatePositiveNegativeInteger(vector<int> &arr)
{
    vector<int> neg, pos;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < neg.size() && j < pos.size())
    {
        arr[k++] = pos[j++];
        arr[k++] = neg[i++];
    }
    while (j < pos.size())
    {
        arr[k++] = pos[j++];
    }

    while (i < neg.size())
    {
        arr[k++] = neg[i++];
    }
}

int main()
{
    vector<int> nums = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    AlternatePositiveNegativeInteger(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    return 0;
}