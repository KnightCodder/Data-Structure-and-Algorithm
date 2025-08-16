#include <bits/stdc++.h>
using namespace std;

int stockBuySell(const vector<int> &v)
{
    int n = v.size();
    int buy = 0, sell = n-1, i = 0, j = n - 1;
    while (true)
    {
        if (i == sell && j == buy) break;
        if (i < sell && v[buy] > v[++i]) buy = i;
        if (j > buy && v[sell] < v[--j]) sell = j;
    }
    int profit = v[sell] - v[buy];
    return profit > 0 ? profit : 0;
}

int main()
{
    vector<int> v = {7,1,5,3,6,4};
    cout << stockBuySell(v) << endl;
}