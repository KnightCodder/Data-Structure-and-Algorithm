#include <bits/stdc++.h>
using namespace std;

int maxProdSubarrayWOzero(vector<int> &nums, int s, int e)
{
    if (s == e) return nums[s];

    int prod = 1;
    int maxo = INT32_MIN, maxNeg = INT32_MAX, minNeg = INT32_MIN;

    for (int i=s; i<=e; i++)
    {
        prod *= nums[i];
        maxo = max(maxo, prod);
        if (prod < 0)
        {
            maxNeg = min(maxNeg, prod);
            minNeg = max(minNeg, prod);
        }
    }

    return max(maxo, maxNeg/minNeg);
}

int maxProdSubarray(vector<int> nums)
{
    int n = nums.size();
    vector<int> zeroIndexs;
    for (int i=0; i<n; i++) if (nums[i] == 0) zeroIndexs.push_back(i);

    int maxProd = INT32_MIN;
    if (zeroIndexs.size() > 0) maxProd = 0;
    else maxProd = maxProdSubarrayWOzero(nums, 0, n-1);

    for (int i=0; i<zeroIndexs.size(); i++)
    {
        if (i > 0)
        {
            maxProd = max(maxProd, maxProdSubarrayWOzero(nums, zeroIndexs[i-1]+1, zeroIndexs[i]-1));
        }
        if (i == 0) maxProd = max(maxProd, maxProdSubarrayWOzero(nums, 0, zeroIndexs[i]-1));
        if (i == zeroIndexs.size()-1) maxProd = max(maxProd, maxProdSubarrayWOzero(nums, zeroIndexs[i]+1, n-1));
    }

    return maxProd;
}

int main()
{
    cout << maxProdSubarray({-1,-6,4,-4}) << endl;
}