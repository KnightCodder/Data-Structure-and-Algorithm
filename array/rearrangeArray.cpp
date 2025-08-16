#include <bits/stdc++.h>
using namespace std;

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

vector<int> rearrangeArray(const vector<int> &v)
{
    vector<int> a(v.size());
    int positive = 0, negative = 1;
    for (int x : v)
    {
        if (x > 0)
        {
            a[positive] = x;
            positive += 2;
        }
        else
        {
            a[negative] = x;
            negative += 2;
        }
    }
    return a;
}

int main()
{
    vector<int> v = {1,-1,-3,-4,2,3};
    print_vector(v);
    print_vector(rearrangeArray(v));
}