#include "bits/stdc++.h"
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long curr_sum = 0, maxsum = -2147483648;

    if (n == 0)
        return 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        maxsum = max(curr_sum, maxsum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return maxsum;
}

int main()
{
    int arr[] = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    cout << maxSubarraySum(arr, 15);
}