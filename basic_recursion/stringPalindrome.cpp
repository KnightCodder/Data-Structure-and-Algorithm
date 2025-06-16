#include <bits/stdc++.h>
using namespace std;

bool stringPalindromeRecursion(const string &s, int low, int high)
{
    if (low >= high) return true;
    if (s[low] != s[high]) return false;
    return stringPalindromeRecursion(s, low+1, high-1);
}

bool stringPalindrome(const string &s)
{
    return stringPalindromeRecursion(s, 0, s.size()-1);
}

int main()
{
    string str;
    cin >> str;
    cout << stringPalindrome(str) << endl;
}