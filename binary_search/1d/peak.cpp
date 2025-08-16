#include <bits/stdc++.h>
using namespace std;

int peakElementRC(vector<int> &arr, int start, int end)
{
    if (end - start < 2) return -1;

    int mid = start + (end - start) / 2;
    if ((mid == 0 || arr[mid-1] < arr[mid]) && (mid == arr.size()-1 || arr[mid+1] < arr[mid])) return mid;
    
    int lmid = start + (mid - start) / 2, rmid = mid + (end - mid) / 2;

    if (arr[lmid] > arr[start] && arr[lmid] > arr[mid]) return peakElementRC(arr, start, mid);
    else if (arr[rmid] > arr[end] && arr[rmid] > arr[mid]) return peakElementRC(arr, mid, end);

    int result = peakElementRC(arr, start, mid);
    if (result != -1) return result;
    return peakElementRC(arr, mid, end);
}

int peakElement(vector<int> arr)
{
    int n = arr.size();
    if (n == 0) return -1;
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n-1] > arr[n-2]) return n-1;
    return peakElementRC(arr, 0, n-1);
}

int main()
{
    cout << peakElement({1,2,3,4,5,6,7,8,5,1}) << endl;
    cout << peakElement({1,2,1,3,5,6,4}) << endl;
    cout << peakElement({1,2,3,4,5,6}) << endl;
    cout << peakElement({}) << endl;
    cout << peakElement({1}) << endl;
    cout << peakElement({1,2}) << endl;
    cout << peakElement({4,5,6,1,7,9,13,10}) << endl;
    cout << peakElement({1,1,1,1,1,1,1,1,1,1,1,1,1}) << endl;
}