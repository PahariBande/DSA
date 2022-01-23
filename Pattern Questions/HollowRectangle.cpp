#include "bits/stdc++.h"
using namespace std;

void hollowRectangle(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (auto j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
                cout << "*";

            else if (j == 0 or j == col - 1)
                cout << "*";

            else
                cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    hollowRectangle(5, 4);
}