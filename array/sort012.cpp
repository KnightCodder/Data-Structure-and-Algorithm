#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

void sort012(vector<int> &v)
{
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 0) swap(v[low++], v[mid++]);
        else if (v[mid] == 1) mid++;
        else swap(v[mid], v[high--]);
    }
}

int main()
{
    vector<int> v = {1,0,0,2,1,1,0};
    print_vector(v);
    sort012(v);
    print_vector(v);
}