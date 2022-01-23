#include "bits/stdc++.h"
using namespace std;

vector<string> permute;

vector<string> permutes(string s, int index = 0)
{
    if (index == s.size())
    {
        permute.push_back(s);
    }

    for (int i = index; i < s.size(); i++)
    {
        swap(s[i], s[index]);
        permutes(s, index + 1);
        swap(s[i], s[index]);
    }
    sort(permute.begin(), permute.end());
    return permute;
}

int main()
{
    string s = "abc";
    vector<string> str = permutes(s);
    for (int i = 0; i < str.size(); i++)
        cout << str[i] << " ";
    return 0;
}