#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(const vector<int> &v)
{
    int max = 0, curr = 0;
    for (int x : v)
    {
        if (x) curr++;
        else
        {
            max = std::max(max, curr);
            curr = 0;
        }
    }
    return std::max(max, curr);
}

int main()
{
    vector<int> v = {1,0,0,1,1,1,0,1,1};
    cout << findMaxConsecutiveOnes(v) << endl;
}