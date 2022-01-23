#include "bits/stdc++.h"
using namespace std;

bool ShuffeledString(string s1, string s2)
{
    if (s1.size() > s2.size())
        return false;

    unordered_map<char, int> mapp;

    for (auto i = 0; i < s2.size(); i++)
        mapp[s2[i]]++;

    for (auto i = 0; i < s1.size(); i++)
        if (mapp.find(s1[i]) == mapp.end())
            return false;

    return true;
}

int main()
{
    string s1 = "onetwofour";
    string s2 = "hellofourtwooneworld";
    cout << ShuffeledString(s1, s2);
    return 0;
}