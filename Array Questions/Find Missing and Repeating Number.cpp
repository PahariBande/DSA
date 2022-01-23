#include "bits/stdc++.h"
using namespace std;

void MissingNumberAndRepeatingNumber(vector<int> &arr)
{
    for (auto i = 0; i < arr.size(); i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];

        else
            cout << "Repeating Element = " << arr[i] << endl;
    }
    for (auto i = 0; i < arr.size(); i++)
        if (arr[i] > 0)
            cout << "Missing Number = " << i + 1 << endl;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 5};
    MissingNumberAndRepeatingNumber(nums);
    return 0;
}