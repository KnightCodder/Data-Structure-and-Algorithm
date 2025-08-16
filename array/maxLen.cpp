#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> v)
{
    unordered_map<int, int> hashmap;
    int n = v.size();
    hashmap[0] = 0;
    int maxlen = 0;
    int sum = 0;

    for (int i=0; i < n; i++)
    {
        sum += v[i];
        if (hashmap.count(sum) == 0)
            hashmap[sum] = i+1;
        else
            maxlen = max(maxlen, i+1 - hashmap[sum]);
    }

    return maxlen;
}

int main()
{
    cout << maxLen({1,-1,3,-3}) << endl;
}