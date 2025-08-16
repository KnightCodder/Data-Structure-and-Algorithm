#include <bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &v)
{
    int max = v[0], curr = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        curr = std::max(v[i], curr + v[i]);
        max = std::max(max, curr);
    }
    return max;
}

int main()
{
    vector<int> v = {-2,-3,-7,-2,-10,-4};
    cout << maxSubArray(v) << endl;
}