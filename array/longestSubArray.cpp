#include <bits/stdc++.h>
using namespace std;

int longestSubArray(const vector<int>&v, long long k)
{
    int n = v.size();
    unordered_map<long long,int> prefixSum;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == k) maxLen = i + 1;
        long long rem = sum - k;
        if (prefixSum.find(rem) != prefixSum.end()) maxLen = max(maxLen, i - prefixSum[rem]);
        if (prefixSum.find(sum) == prefixSum.end()) prefixSum[sum] = i;
    }
    return maxLen;
}

int main()
{
    vector<int> v = {2,0,0,3};
    cout << longestSubArray(v, 3) << endl;
}