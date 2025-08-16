#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

void rotateMatrix(vector<vector<int>> &m)
{
    int n = m.size();
    int s = 0, e = n - 2, i = 0;

    while (s <= e)
    {
        for (int j = s; j <= e; j++)
        {
            swap(m[i][j], m[e + 1 - j + s][i]);
            swap(m[e + 1 - j + s][i], m[e + 1][e + 1 - j + s]);
            swap(m[e + 1][e + 1 - j + s], m[i + j - s][e + 1]);
        }
        s++, e--, i++;
    }
}

int main()
{
    vector<vector<int>> m = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},
    };
    for (vector<int> v : m) print_vector(v);
    cout << endl;
    rotateMatrix(m);
    for (vector<int> v : m) print_vector(v);
    cout << endl;
}