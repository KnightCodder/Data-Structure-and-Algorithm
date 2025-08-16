#include <bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int> &v, int t)
{
    for (int i = 0; i < v.size(); i++) if (t == v[i]) return i;
    return -1;
}

int main()
{
    vector<int> a = {0,1,2,3,4,3,5,8,6};
    cout << linearSearch(a, 5) << endl;
}