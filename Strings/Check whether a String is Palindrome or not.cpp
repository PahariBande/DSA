#include "bits/stdc++.h"
using namespace std;

bool IsPalindrome(string s)
{
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--) // auto not working here
        if (s[i] != s[j])
            return false;

    return true;
}

int main()
{
    string s = "ashsa";
    cout << IsPalindrome(s);
    return 0;
}