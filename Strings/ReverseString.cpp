#include "bits/stdc++.h"
using namespace std;

void reverse(string &s)
{
    int low = 0, high = s.size() - 1;
    while (low <= high)
        swap(s[low++], s[high--]);

    cout << s;
}

int main()
{
    string s = "hello";
    reverse(s);
    return 0;
}