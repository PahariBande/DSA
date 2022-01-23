#include "bits/stdc++.h"
using namespace std;

void PrintAllSubsequences(string s, int index = -1, string curr = "")
{
    if (index == s.length())
        return;

    if (!curr.empty())
        cout << curr << "\n";

    for (int i = index + 1; i < s.length(); i++)
    {
        curr += s[i];
        PrintAllSubsequences(s, i, curr);
        curr = curr.erase(curr.size() - 1);
    }
}

int main()
{
    string str = "abc";
    PrintAllSubsequences(str);
    return 0;
}