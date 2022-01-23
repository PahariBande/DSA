#include "bits/stdc++.h"
using namespace std;

void rotate(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    rotate(nums, n);
    for (int i = 0; i < n; i++)
        cout << nums[i];
    return 0;
}