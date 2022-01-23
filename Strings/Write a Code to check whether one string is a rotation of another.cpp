#include "bits/stdc++.h"
using namespace std;

bool isRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    queue<char> q1;

    for (auto i = 0; s1.length(); i++)
        q1.push(s1[i]);

    queue<char> q2;
    for (auto i = 0; s2.length(); i++)
        q2.push(s2[i]);

    int k = 0;

    while (k < s2.length())
    {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);

        if (q1 == q2)
            return true;

        k++;
    }
    return false;
}

int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";
    cout << isRotation(s1, s2);
}