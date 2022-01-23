#include "bits/stdc++.h"
using namespace std;

pair<int, int> SubarrayWithGivenSum(vector<int> nums, int s)
{
    pair<int, int> pr;
    int i = 0, j = 0;
    int sum = 0;

    while (j < nums.size() and sum + nums[j] <= s)
    {
        sum += nums[j];
        j++;
    }

    if (sum == s)
    {
        pr.first = i + 1;
        pr.second = j;
        return pr;
    }

    while (j < nums.size())
    {
        sum += nums[j];
        while (sum > s)
        {
            sum -= nums[j];
            i++;
        }
        if (sum == s)
        {
            pr.first = i + 1;
            pr.second = j + 1;
            return pr;
        }
        j++;
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    pair<int, int> pr = SubarrayWithGivenSum(nums, 15);
    cout << "Starting Position " << pr.first << " Ending Position " << pr.second << endl;
    return 0;
}