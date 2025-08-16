#include <bits/stdc++.h>
using namespace std;

int singleNumber(const vector<int> &v)
{
    int answer = 0;
    for (int x : v) answer ^= x;
    return answer;
}

int main()
{
    vector<int> v = {1,2,2,4,3,1,4};
    cout << singleNumber(v) << endl;
}