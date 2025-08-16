#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

void setMatrixZero(vector<vector<int>> &matrix)
{
    unordered_set<int> izero, jzero;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                izero.insert(i);
                jzero.insert(j); 
            }
        }
    }

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) if (izero.count(i) || jzero.count(j)) matrix[i][j] = 0;
}

int main()
{
    vector<vector<int>> m = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5},
    };
    for (vector<int> v : m) print_vector(v);
    setMatrixZero(m);
    cout << endl;
    for (vector<int> v : m) print_vector(v);
}