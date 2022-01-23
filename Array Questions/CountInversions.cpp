#include "bits/stdc++.h"
using namespace std;

int mergeSort(int nums[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (auto i = 0; i < n1; i++)
        a[i] = nums[i];

    for (auto i = n2; i < r; i++)
        b[i] = nums[i];

    int i = 0, j = 0, k = l;
    int inv = 0;

    while ((i < n1) and (j < n2))
    {
        if (a[i] <= b[j])
        {
            nums[k] = a[i];
            k++;
            i++;
        }
        else
        {
            nums[k] = b[j];
            inv += n1 - i;
            k++;
            i++;
        }
    }

    while (i < n1)
    {
        nums[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        nums[k] = b[j];
        k++;
        i++;
    }
    return inv;
}

int merge(int nums[], int l, int r)
{
    int inv = 0;
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        inv += merge(nums, l, mid);
        inv += merge(nums, mid + 1, r);
        inv += mergeSort(nums, l, mid, r);
    }
    return inv;
}

int main()
{
    int nums[] = {2, 4, 1, 3, 5};
    cout << merge(nums, 0, 4);
    return 0;
}