#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(const vector<int> &v)
{
    unordered_set<int> hashset;
    for (int x : v) hashset.insert(x);
    int maxCons = 0, currCons = 0;
    for (int x : hashset)
    {
        if (hashset.count(x-1)) continue;
        currCons = 1;
        int cons = x + 1;
        while (hashset.count(cons++)) currCons++;
        maxCons = max(maxCons, currCons);
    }
    return maxCons;
}

int main()
{
    vector<int> v = {0,3,7,2,5,8,4,6,0,1};
    cout << longestConsecutive(v) << endl;
}