#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

void nextPermutation(vector<int> &v)
{
    int n = v.size();
    if (n < 2) return;
    int i = n - 2;
    while (i >= 0 && v[i] >= v[i+1]) i--;
    if (i >= 0)
    {
        int j = n - 1;
        while (v[j] <= v[i]) j--;
        swap(v[i], v[j]);
    }
    reverse(v.begin() + i + 1, v.end());
}

int main()
{
    // vector<int> v = {1,2,3,0};
    vector<int> v = {4,3,2,1};
    // vector<int> v = {0,1,0,2,1,1};
    print_vector(v);
    nextPermutation(v);
    print_vector(v);
}