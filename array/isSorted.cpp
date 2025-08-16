#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &arr)
{
    if (arr.size() < 2) return true;
    for (int i = 1; i < arr.size(); i++) if (arr[i-1] > arr[i]) return false;
    return true;
}

int main()
{
    vector <int> arr = {1,4,2,3,4,9};
    cout << isSorted(arr) << endl;
}