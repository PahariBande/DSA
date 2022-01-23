#include "bits/stdc++.h"
using namespace std;

vector<int> occurences(vector<int> arr, int x)
{
    vector<int> ans;

    int first_occurence = -1;

    int low = 0, n = arr.size() - 1;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            first_occurence = mid;
            high = mid - 1;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    int last_occurence = -1;

    low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            last_occurence = mid;
            low = mid + 1;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    ans.push_back(first_occurence);
    ans.push_back(last_occurence);

    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    vector<int> occur = occurences(nums, 5);
    cout << occur[0] << " " << occur[1];
}