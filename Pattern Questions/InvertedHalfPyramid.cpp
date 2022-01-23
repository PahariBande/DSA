#include "bits/stdc++.h"
using namespace std;

void InvertedHalfPyramid(int n)
{
    for (auto i = n; i >= 0; i--)
    {
        for (auto j = 0; j < i; j++)
            cout << "*"
                 << " ";

        cout << endl;
    }
}

int main()
{
    InvertedHalfPyramid(5);
}