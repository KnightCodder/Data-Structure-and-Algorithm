#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v, int start, int end)
{
    while(start < end) swap(v[start++], v[end--]);
}

void rotateLeft(vector<int> &v, int k)
{
    if (v.size() < 2) return;
    k %= v.size();

    reverse(v, 0, k-1);
    reverse(v, k, v.size() - 1);
    reverse(v, 0, v.size() - 1);
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1,2,3,4,5,6};
    print_vector(a);
    rotateLeft(a, 2);
    print_vector(a);
}