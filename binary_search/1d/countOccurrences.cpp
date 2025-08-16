#include <bits/stdc++.h>
using namespace std;

int countOccurrences(vector<int> arr, int k)
{
    vector<int>::iterator lbit = lower_bound(arr.begin(), arr.end(), k);
    if (lbit == arr.end() || *lbit != k) return 0;
    vector<int>::iterator ubit = upper_bound(arr.begin(), arr.end(), k);
    return distance(lbit, ubit);
}

int main()
{
    cout << countOccurrences({0,0,1,1,1,2,3},0) << endl;
    cout << countOccurrences({0,0,1,1,1,2,3},1) << endl;
    cout << countOccurrences({0,0,1,1,1,2,3},2) << endl;
    cout << countOccurrences({0,0,1,1,1,2,3},3) << endl;
    cout << countOccurrences({5,5,5,5,5,5,5},5) << endl;
    cout << countOccurrences({2,4,6,8,10,12},3) << endl;
}