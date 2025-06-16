#include <bits/stdc++.h>
using namespace std;

int highestCommonFactor(int n1, int n2)
{
    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return abs(n1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << highestCommonFactor(a, b) << endl;
}