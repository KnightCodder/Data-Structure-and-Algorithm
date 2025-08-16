#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &v)
{
    int j = 0;
    for (int i = 0; i < v.size(); i++) if (v[i]) v[j++] = v[i];
    for (; j < v.size(); j++) v[j] = 0;
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1,0,3,4,5,6};
    print_vector(a);
    moveZeroes(a);
    print_vector(a);
}