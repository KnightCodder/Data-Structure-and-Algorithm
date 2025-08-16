#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

vector<int> spiralMatrix(const vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int top = 0, right = n - 1, bottom = m - 1, left = 0;
    int i = 0, j = 0;
    vector<int> spiral;

    while (true)
    {
        top++;

        if (j > right) break;
        while ( j <= right )
        {
            spiral.push_back(matrix[i][j]);
            j++;
        }
        right--, j--, i++;
        
        if (i > bottom) break;
        while ( i <= bottom )
        {
            spiral.push_back(matrix[i][j]);
            i++;
        }
        bottom--, i--, j--;
        
        if (j < left) break;
        while ( j >= left )
        {
            spiral.push_back(matrix[i][j]);
            j--;
        }
        left++, j++, i--;
        
        if (i < top) break;
        while ( i >= top )
        {
            spiral.push_back(matrix[i][j]);
            i--;
        }
        i++, j++;
    }

    return spiral;
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
    print_vector(spiralMatrix(m));
}