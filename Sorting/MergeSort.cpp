#include "bits/stdc++.h"
using namespace std;

void mergeArray(int arr[], int l, int r, int mid)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;

    while ((i < n1) and (j < n2))
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int nums[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        mergeArray(nums, l, r, mid);
    }
}

int main()
{
    int nums[] = {1, 10, 8, 7, 5, 2, 12};
    mergeSort(nums, 0, 7);
    for (int i = 0; i < 7; i++)
        cout << nums[i] << " ";

    return 0;
}