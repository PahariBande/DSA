#include "bits/stdc++.h"
using namespace std;

string CountAndSay(int n)
{
    if (n == 1)
        return "1";

    else if (n == 2)
        return "11";

    string s = "11";
    string ans = "";

    for (int i = 3; i <= n; i++)
    {
        ans = "";
        int count = 1;
        int j;
        for (j = 1; j < s.size(); j++)
        {
            if (s[j] != s[j - 1])
            {
                ans += to_string(count);
                ans += s[j - 1];
                count = 1;
            }
            else
                count++;
        }
        ans += to_string(count);
        ans += s[j - 1];
        s = ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << CountAndSay(n);
    return 0;
}