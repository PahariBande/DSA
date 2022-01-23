#include "bits/stdc++.h"
using namespace std;

int CalculateSize(string s, int i, int j)
{
    while (i >= 0 and j < s.size() and s[i] == s[j])
    {
        i--;
        j++;
    }
    return j - i - 1;
}

string LongestPalindromicString(string s)
{
    int start = 0, end = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int len1 = CalculateSize(s, i, i + 1);
        int len2 = CalculateSize(s, i, i);
        int maxLen = max(len1, len2);

        if (end - start < maxLen)
        {
            end = i + (maxLen / 2);
            start = i - (maxLen - 1) / 2;
        }
    }
    return s.substr(start, end + 1);
}

int main()
{
    string s = "aaaabbaa";
    cout << LongestPalindromicString(s);
    return 0;
}
