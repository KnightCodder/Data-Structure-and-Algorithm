#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N)
{
    if (N == 0) return 0;
    if (N == 1) return 1;
    return fibonacci(N-1) + fibonacci(N-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}