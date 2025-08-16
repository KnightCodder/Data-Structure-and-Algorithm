#include <bits/stdc++.h>
using namespace std;

int search(vector<int> v, int target)
{
    int n = v.size();
    int l = 0, r = n-1;

    while (l <= r)
    {
        int mid = ( l + r ) / 2;

        if (target < v[mid]) r = mid-1;
        else if (target > v[mid]) l = mid+1;
        else if (mid == 0 || v[mid-1] != target) return mid;
        else r = mid-1;
    }

    return -1;
}

int main()
{
    cout << search({-1,0,3,5,9,12}, 9) << endl;
    cout << search({-1,0,3,5,9,12}, 50) << endl;
    cout << search({-1,0,0,3,5,5,5,9,12}, 5) << endl;
}