#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> arr)
{
    int n = arr.size();
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (mid > 0 && arr[mid] == arr[mid-1])
        {
            if (mid % 2 == 0) r = mid - 2;
            else l = mid + 1;
        }
        else if (mid < n-1 && arr[mid] == arr[mid+1])
        {
            if (mid % 2 == 0) l = mid + 2;
            else r = mid - 1;
        }
        else return arr[mid];
    }

    return -1;
}

int main()
{
    cout << singleNonDuplicate({1,1,2,2,3,4,4,5,5}) << endl;
    cout << singleNonDuplicate({1,1,2,2,3,3,4,4,5,5,6,7,7}) << endl;
    cout << singleNonDuplicate({1,1,2,2,3,3,4,4,5,5,7,7}) << endl;
    cout << singleNonDuplicate({1,1,2,2,3,3,4,4,5,5,7,7,8}) << endl;
    cout << singleNonDuplicate({0,1,1,2,2,3,3,4,4,5,5,7,7}) << endl;
    cout << singleNonDuplicate({0}) << endl;
    cout << singleNonDuplicate({0,0}) << endl;
}