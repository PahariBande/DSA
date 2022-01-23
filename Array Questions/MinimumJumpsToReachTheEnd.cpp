#include "bits/stdc++.h"
using namespace std;

int minimumJumpsToReachTheEnd(vector<int> nums)
{
    int maxReach = nums[0], steps = nums[0], jumps = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1)
            return jumps;
        maxReach = max(maxReach, nums[i] + i);
        steps--;
        if (steps == 0)
        {
            jumps++;
            if (i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 2, 6, 7, 6, 8, 9};
    cout << minimumJumpsToReachTheEnd(nums);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number
// of jumps to reach arr[h] from arr[l]
int minJumps(int arr[], int n)
{

    // Base case: when source and
    // destination are same
    if (n == 1)
        return 0;

    // Traverse through all the points
    // reachable from arr[l]
    // Recursively, get the minimum number
    // of jumps needed to reach arr[h] from
    // these reachable points
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--)
    {
        if (i + arr[i] >= n - 1)
        {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }

    return res;
}

// Driver Code
int main()
{
    int arr[] = {1, 3, 6, 3, 2,
                 3, 6, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;
}