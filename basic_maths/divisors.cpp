#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int num)
{
    if (num <= 0) return {};
    set<int> divisorSet;
    for (int i = 1; i*i <= num; ++i)
    {
        if (num % i == 0)
        {
            divisorSet.insert(i);
            divisorSet.insert(num / i);
        }
    }
    return vector<int> (divisorSet.begin(), divisorSet.end());
}

int main()
{
    int n;
    cin >> n;
    vector<int> d = divisors(n);
    for (int x : d)
    {
        cout << x << " ";
    }
}