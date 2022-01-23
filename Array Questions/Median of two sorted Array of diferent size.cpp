#include "bits/stdc++.h"
using namespace std;

int Median(vector<int> num1, vector<int> num2)
{
    if (num1.size() > num2.size())
        return Median(num2, num1);

    int low = 0, high = num1.size();
    while (low <= high)
    {
        int cut1 = low + (high - low) / 2;
        int cut2 = ((num1.size() + num2.size()) / 2) - cut1;
        int l1 = cut1 == 0 ? INT_MIN : num1[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : num2[cut2 - 1];
        int r1 = cut1 == num1.size() ? INT_MAX : num1[cut1];
        int r2 = cut2 == num2.size() ? INT_MAX : num2[cut2];

        if (l1 > r2)
            high = cut1 - 1;

        else if (l2 > r1)
            low = cut1 + 1;

        else
        {
            return ((num1.size() + num2.size()) % 2 == 0 ? ((max(l1, l2) + min(r1, r2))) / 2 : min(r1, r2));
        }
    }
}
int main()
{
    vector<int> num1 = {1, 2, 3, 6};
    vector<int> num2 = {4, 7, 8, 10};
    cout << Median(num1, num2);
    return 0;
}