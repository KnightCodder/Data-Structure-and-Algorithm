#include <bits/stdc++.h>
using namespace std;

int missingNumber(const vector<int> &v)
{
    int n = v.size();
    int sum = 0;
    for (int x : v) sum += x;
    return ((n*(n+1))/2) - sum;
}

int main()
{
    vector<int> arr = {0,2,3,1,4,5};
    cout << missingNumber(arr) << endl;
}