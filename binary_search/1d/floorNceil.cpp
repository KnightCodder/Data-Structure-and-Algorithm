#include <bits/stdc++.h>
using namespace std;

vector<int> getFloorAndCeil(vector<int> arr, int k)
{
    int l = 0, r = arr.size();

    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] < k) l = mid+1;
        else r = mid;
    }

    if (l==arr.size()) return {arr.back(), -1};
    if (arr[l] == k) return {k,k};
    if (l==0) return {-1,arr.front()};
    return {arr[l-1], arr[l]};
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 5));
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 8));
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 3));
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 2));
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 10));
    print_vector(getFloorAndCeil({3,4,4,7,8,10}, 11));
}