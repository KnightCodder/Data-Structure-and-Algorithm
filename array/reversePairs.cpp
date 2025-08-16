#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

int reversePairs(vector<int> nums)
{
    int count = 0;
    int n = nums.size();

    tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> rbtree;

    for (int i = n-1; i >= 0; i--)
    {
        count += rbtree.order_of_key(nums[i]);
        rbtree.insert(nums[i] * 2);
    }

    return count;
}

int main()
{
    cout << reversePairs({6,4,1,2,7}) << endl; 
    cout << reversePairs({5,4,4,3,3}) << endl;
    cout << reversePairs({6,4,4,2,2}) << endl;
}