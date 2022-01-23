#include "iostream"
using namespace std;

void numberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    numberPattern(n);

    return 0;
}