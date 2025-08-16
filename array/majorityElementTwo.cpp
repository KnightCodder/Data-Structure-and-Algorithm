#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

vector<int> majorityElement(const vector<int> &v)
{
    int n = v.size();
    if (n < 2) return v;

    int el1, el2 = v[0];
    int cnt1 = 0, cnt2 = 1;

    for (int i = 1; i < n; i++)
    {
        if (cnt1 == 0 && el2 != v[i]) el1 = v[i], cnt1++;
        else if (cnt2 == 0 && el1 != v[i]) el2 = v[i], cnt2++;
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else cnt1--, cnt2--;
    }

    vector<int> ans = {el1, el2};
    cnt1 = cnt2 = 0;
    for (int x : v)
    {
        if (x == el1) cnt1++;
        else if (x == el2) cnt2++;
    }
    if (cnt2 <= n / 3) ans.erase(ans.begin() + 1);
    if (cnt1 <= n / 3) ans.erase(ans.begin());
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> v = {1,2,3,1,3,1,2,4,1,3,5,6};
    print_vector(v);
    print_vector(majorityElement(v));
}