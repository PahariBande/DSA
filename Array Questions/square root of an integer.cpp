#include "bits/stdc++.h"
using namespace std;

int squareRoot(int N)
{
    int a = sqrt(N);

    if (a * a == N)
        return a - 1;

    else
        return a;
}

int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n);
    return 0;
}