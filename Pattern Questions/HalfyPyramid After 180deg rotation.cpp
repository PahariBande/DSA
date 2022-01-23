#include "bits/stdc++.h"
using namespace std;

void halfyPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << " ";

            else
                cout << "*";
        }
        cout << endl;
    }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //         cout << " ";

    //     for (int j = 0; j < i; j++)
    //         cout << "*";
    //     cout << endl;
    // }
}

int main()
{
    halfyPyramid(5);
    return 0;
}