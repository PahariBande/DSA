#include "bits/stdc++.h"
using namespace std;

void halfyPyramidUsingNumber(int n)
{
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << counter << " ";

        cout << endl;
        counter++;
    }
}

int main()
{
    halfyPyramidUsingNumber(5);
    return 0;
}