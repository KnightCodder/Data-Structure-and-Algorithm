#include <bits/stdc++.h>
using namespace std;

// vector<int> searchRange(vector<int> arr, int k)
// {
//     int n = arr.size(), lb = -1, ub = -1;
    
//     int l = 0, r = n-1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == k)
//         {
//             if (mid == 0 || arr[mid-1] != k) 
//             {
//                 lb = mid;
//                 break;
//             }
//             r = mid-1;
//         }
//         else if (arr[mid] < k) l = mid+1;
//         else r = mid-1;
//     }

//     if (lb == -1) return {-1,-1};
//     l = lb, r = n-1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == k)
//         {
//             if (mid == n-1 || arr[mid+1] != k) 
//             {
//                 ub = mid;
//                 break;
//             }
//             l = mid+1;
//         }
//         else if (arr[mid] < k) l = mid+1;
//         else r = mid-1;
//     }

//     return {lb, ub};
// }

vector<int> searchRange(vector<int> arr, int k)
{
    vector<int>::iterator lbit = lower_bound(arr.begin(), arr.end(), k);
    if (lbit == arr.end() || *lbit != k) return {-1,-1};
    vector<int>::iterator ubit = upper_bound(arr.begin(), arr.end(), k);
    return {int(lbit - arr.begin()), int(ubit - arr.begin()) - 1};
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    print_vector(searchRange({5,7,7,8,8,10},8));
    print_vector(searchRange({5,7,7,8,8,10},6));
    print_vector(searchRange({5,7,7,8,8,10},5));
    print_vector(searchRange({5,7,7,8,8,10},4));
    print_vector(searchRange({5,7,7,8,8,10},10));
    print_vector(searchRange({5,7,7,8,8,10},11));
}