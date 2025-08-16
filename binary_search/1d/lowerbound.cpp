#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> v, int x)
{
    int n = v.size();
    int l = 0, r = n-1;

    while (l <= r)
    {
        int mid = (l+r)/2;

        if (v[mid] < x) l = mid + 1;
        else if (mid == 0 || v[mid-1] < x) return mid;
        else r = mid - 1;
    }

    return n;
}

int main()
{
    cout << lowerbound({1,2,2,3}, 2) << endl;
    cout << lowerbound({3,5,8,15,19}, 9) << endl;
    cout << lowerbound({3,5,8,15,19}, 20) << endl;
}