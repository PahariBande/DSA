#include "bits/stdc++.h"
using namespace std;

vector<int> CommonElements(vector<int> num1, vector<int> num2, vector<int> num3)
{
    int i = 0, j = 0, k = 0;
    vector<int> nums;
    while ((i < num1.size()) and (j < num2.size()) and (k < num3.size()))
    {
        if ((num1[i] == num2[j]) and (num2[j] == num3[k]))
        {
            nums.push_back(num1[i]);
        }

        else if (num1[i] < num2[j])
        {
            i++;
        }
        else if (num2[j] < num3[k])
            j++;

        else
            k++;
    }
    return nums;
}

int main()
{
    vector<int> num1 = {1, 5, 10, 20, 40, 80};
    vector<int> num2 = {6, 7, 20, 80, 100};
    vector<int> num3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> nums = CommonElements(num1, num2, num3);
    for (int i = 0; i < nums.size(); i++)
        cout
            << nums[i] << " ";

    return 0;
}