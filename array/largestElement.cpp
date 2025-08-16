#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> v)
{
    int max = INT32_MIN;
    for (int x : v) max = std::max(x, max);
    return max;
}

int main()
{
    cout << largestElement(vector({4,5,0,1,8,-4})) << endl;
}