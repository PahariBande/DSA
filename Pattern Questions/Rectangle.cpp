#include "bits/stdc++.h"
using namespace std;

void Rectangle(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << "*"
                 << " ";

        cout << endl;
    }
}

int main()
{
    Rectangle(5, 4);
}