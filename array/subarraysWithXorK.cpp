#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> &nums, int k)
{
    int count = 0, cxor = 0;
    unordered_map<int,int> hashmap;
    hashmap[0]++;

    for (int x : nums)
    {
        cxor ^= x;
        count += hashmap[cxor ^ k];
        hashmap[cxor]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {5,6,7,8,9};
    int k = 5;
    cout << subarraysWithXorK(nums, k) << endl;
}