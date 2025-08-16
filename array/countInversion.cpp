#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

long long int numberOfInversion(vector<int> nums)
{
    long long int count = 0;
    int n = nums.size();

    tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> rbtree;

    for (int i = n-1; i >= 0; i--)
    {
        count += rbtree.order_of_key(nums[i]);
        rbtree.insert(nums[i]);
    }

    return count;
}

int main()
{
    cout << numberOfInversion({2,3,7,1,3,5}) << endl;
}