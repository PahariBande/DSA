#include "bits/stdc++.h"
using namespace std;

vector<int> SpiralTraversalOfAMatrix(vector<vector<int>> matrix)
{
    vector<int> v;
    if (matrix.size() == 0)
        return v;
    int m = matrix.size(), n = matrix[0].size(), rs = 0, cs = 0, re = m - 1, ce = n - 1;
    while (cs <= ce && rs <= re)
    {
        if (cs <= ce && rs <= re)
            for (int i = cs; i <= ce; i++)
                v.push_back(matrix[rs][i]);
        rs++;
        if (cs <= ce && rs <= re)
            for (int i = rs; i <= re; i++)
                v.push_back(matrix[i][ce]);
        ce--;
        if (cs <= ce && rs <= re)
            for (int i = ce; i >= cs; i--)
                v.push_back(matrix[re][i]);
        re--;
        if (cs <= ce && rs <= re)
            for (int i = re; i >= rs; i--)
                v.push_back(matrix[i][cs]);
        cs++;
    }
    return v;
}

int main()
{
    vector<vector<int>> nums{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> spiral = SpiralTraversalOfAMatrix(nums);
    for (int i = 0; i < spiral.size(); i++)
        cout << spiral[i] << " ";
    // 1 2 3 4 8 12 11 10 9 5 6 7
    return 0;
}