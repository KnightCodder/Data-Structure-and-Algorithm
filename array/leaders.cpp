#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

vector<int> leaders(const vector<int> &v)
{
    vector<int> leader;
    int n = v.size();
    int maxSoFar = v[n-1];
    leader.push_back(v[n-1]);
    for (int i = n-2; i >= 0; i--)
    {
        if (v[i] > maxSoFar) leader.push_back(v[i]);
        maxSoFar = max(maxSoFar, v[i]);
    }
    reverse(leader.begin(), leader.end());
    return leader;
}

int main()
{
    vector<int> v = {-3,4,5,1,-4,-5};
    // vector<int> v = {1,2,5,3,1,2};
    print_vector(v);
    print_vector(leaders(v));
}