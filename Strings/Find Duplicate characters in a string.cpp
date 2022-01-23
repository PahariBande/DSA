#include "bits/stdc++.h"
using namespace std;

void FindDuplicate(string s)
{
    unordered_map<char, int> mapp;

    for (int i = 0; i < s.size(); i++)
        mapp[s[i]]++;

    for (auto i = mapp.begin(); i != mapp.end(); i++)
        if (i->second > 1)
            cout << i->first << " ";
}

int main()
{
    string s = "Shubham Kumar";
    FindDuplicate(s);
}