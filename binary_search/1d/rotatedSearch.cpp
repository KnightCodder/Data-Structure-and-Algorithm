#include <bits/stdc++.h>
using namespace std;

int rotatedSearch(vector<int> arr, int k)
{
    int n = arr.size();
    if (n==0) return -1;
    int l = 0, r = n-1;

    while (arr[r] <= arr[l])
    {
        if (r == 0 || arr[r-1] > arr[r] || r-l <= 1) break;

        int mid = l + (r - l) / 2;
        if (arr[l] <= arr[mid]) l = mid;
        else if (arr[r] >= arr[mid]) r = mid;
    }

    vector<int>::iterator lit = lower_bound(arr.begin(), arr.begin() + r, k);
    if (*lit == k) return distance(arr.begin(), lit);
    vector<int>::iterator rit = lower_bound(arr.begin() + r, arr.end(), k);
    if (rit != arr.end() && *rit == k) return distance(arr.begin(), rit);

    return -1;
}

int main()
{
    cout << rotatedSearch({4,5,6,7,0,1,2},0) << endl;
    cout << rotatedSearch({4,5,6,7,0,1,2},2) << endl;
    cout << rotatedSearch({4,5,6,7,0,1,2},4) << endl;
    cout << rotatedSearch({4,5,6,7,0,1,2},8) << endl;
    cout << rotatedSearch({4,5,6,7,8,0,1},6) << endl;
    cout << rotatedSearch({0,1,2,3,4,5,6},0) << endl;
    cout << rotatedSearch({5,0,1,2,3,4},0) << endl;
    cout << rotatedSearch({5,0,1,2,3,4,5},0) << endl;
    cout << rotatedSearch({5,5,5,5,5,5,5},0) << endl;
    cout << rotatedSearch({5,5,5,0,0,0,2,5,5,5,5},0) << endl;
}