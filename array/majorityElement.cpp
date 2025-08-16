#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int> &v)
{
    int candidate = v[0], count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == candidate) count++;
        else if (--count == 0)
        {
            candidate = v[i];
            count = 1;
        }
    }
    return candidate;
}

int main()
{
    vector<int> v = {1,1,1,2,1};
    cout << majorityElement(v) << endl;
}