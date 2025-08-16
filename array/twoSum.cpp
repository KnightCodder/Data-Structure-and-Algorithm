#include <bits/stdc++.h>
using namespace std;

vector<int> twoSums(const vector<int> &v, int target)
{
    unordered_map<int,int> hashmap;
    for (int i = 0; i < v.size(); i++)
    {
        if (hashmap.find(target - v[i]) != hashmap.end()) return {hashmap[target - v[i]], i};
        hashmap[v[i]] = i;
    }
    return {-1,-1};
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v = {0,-2,4,1,3,8};
    print_vector(twoSums(v, 7));
}