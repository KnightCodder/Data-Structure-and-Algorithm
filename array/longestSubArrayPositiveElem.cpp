#include <bits/stdc++.h>
using namespace std;

int longestSubArray(const vector<int>&v, long long k)
{
    int n = v.size();
    long long sum = v[0];
    int l = 0, r = 0, maxLen = 0;

    while (r < n)
    {
        while (l <= r && sum > k) sum -= v[l++];
        if (sum == k) maxLen = max(maxLen, r - l + 1);
        r++;
        if (sum <= k) sum += v[r];
    }

    return maxLen;
}

int main()
{
    vector<int> v = {1,2,2,3,4,5};

    cout << longestSubArray(v, 4) << endl;
}