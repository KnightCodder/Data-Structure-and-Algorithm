#include <bits/stdc++.h>
using namespace std;

void leftRotateArrayByOne(vector<int> &v)
{
    if (v.size() < 2) return;
    int temp = v[0];
    for (int i = 1; i < v.size(); i++) v[i-1] = v[i];
    v[v.size() - 1] = temp;
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1,2,3,4};
    print_vector(a);
    leftRotateArrayByOne(a);
    print_vector(a);
}