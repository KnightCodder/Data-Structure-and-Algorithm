#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> arr, int t)
{
    int l = 0, r = arr.size();
    while (l < r)
    {
        int mid = l + (r-l)/2;
        if (arr[mid] < t) l = mid + 1;
        else r = mid;
    }

    return l;
}

int main()
{
    cout << searchInsertPosition({1,3,5,6},5) << endl;
    cout << searchInsertPosition({1,3,5,6},2) << endl;
    cout << searchInsertPosition({1,3,5,6},1) << endl;
    cout << searchInsertPosition({1,3,5,6},0) << endl;
    cout << searchInsertPosition({1,3,5,6},7) << endl;
}