#include <bits/stdc++.h>
using namespace std;

int NnumbersSum(int N)
{
    if (N < 1) return 0;
    if (N == 1) return 1;
    return N + NnumbersSum(N - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << NnumbersSum(n) << endl;
}