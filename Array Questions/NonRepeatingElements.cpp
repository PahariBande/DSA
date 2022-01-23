#include "bits/stdc++.h"
using namespace std;

// int nonRepeatingElements(vector<int> nums)
// {
//     int N = 1e6 + 2;
//     vector<int> count(N);

//     for (auto i = 0; i < nums.size(); i++)
//     {
//         count[nums[i]]++;
//     }

//     for (auto i = 0; i < count.size(); i++)
//         if (count[i] == 1)
//             return i;

//     return -1;
// }For Positive elements only

int nonRepeatingElements(vector<int> arr)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++)
        freq[arr[i]]++;

    unordered_map<int, int>::iterator itr;
    for (auto i = 0; i < arr.size(); i++)
    {
        if (freq[arr[i]] == 1)
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {-1, 2, -1, 3, 2};
    cout << nonRepeatingElements(nums);
    return 0;
}