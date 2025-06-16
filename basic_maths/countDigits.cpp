#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    if (n == 0) return 1;
    return (int)log10(abs(n)) + 1;
}

int main()
{
    int num;
    cin >> num;
    cout << countDigit(num) << endl;
}

