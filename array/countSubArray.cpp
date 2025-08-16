#include <bits/stdc++.h>
using namespace std;

int countSubArray(const vector<int> &v, int k)
{
    unordered_map<int, int> hashmap;
    int sum = 0, count = 0;
    hashmap[0]++;
    for (int x : v)
    {
        sum += x;
        count += hashmap[sum - k];
        hashmap[sum]++;
    }
    return count;
}

int main()
{
    vector<int> v = {1,1,-1,2,3,1};
    cout << countSubArray(v, 1) << endl;
}