#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    if (num < 0) return false;
    int len = (int)log10(num) + 1;
    int sum = 0, temp = num;
    while (num > 0)
    {
        sum += pow(num % 10, len);
        num /= 10;
    }
    return temp == sum;
}

int main()
{
    int n;
    cin >> n;
    cout << isArmstrong(n) << endl;
}