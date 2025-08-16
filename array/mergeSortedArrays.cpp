#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int a = m-1, b = n-1, k = m+n-1;

    while(a >= 0 && b >= 0)
    {
        if (nums2[b] >= nums1[a]) nums1[k--] = nums2[b--];
        else nums1[k--] = nums1[a--];
    }
    
    while (b >= 0) nums1[k--] = nums2[b--];
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> nums1 = {0,2,7,8};
    vector<int> nums2 = {-7,-3,-1};

    print_vector(nums1);
    print_vector(nums2);
    
    fill_n(back_inserter(nums1), nums2.size(), 0);
    merge(nums1, nums1.size() - nums2.size(), nums2, nums2.size());
    print_vector(nums1);
}