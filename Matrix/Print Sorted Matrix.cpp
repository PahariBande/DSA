#include "bits/stdc++.h"
using namespace std;

vector<int> SortedMatrix(vector<vector<int>> nums)
{
    vector<int> num1;
    int k = 0;

    for (auto i = 0; i < nums.size(); i++)
        for (auto j = 0; j < nums[i].size(); j++)
            num1[k++] = nums[i][j];

    sort(num1.begin(), num1.end());

    return num1;
}

int main()
{
    vector<vector<int>> nums = {{1, 5, 3}, {2, 8, 7}, {4, 6, 9}};

    vector<int> num1 = SortedMatrix(nums);

    for (auto i = 0; i < num1.size(); i++)
        cout << num1[i] << " ";

    return 0;
}