#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &v)
{
    if (v.size() < 2) return;
    int j = 0;
    for (int i = 1; i < v.size(); i++) if (v[i] != v[j]) v[++j] = v[i];
    v.resize(j+1);
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {0,0,3,3,5,6};
    print_vector(a);
    removeDuplicates(a);
    print_vector(a);
}