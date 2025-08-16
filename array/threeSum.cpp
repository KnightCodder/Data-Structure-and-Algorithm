#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSums(vector<int> v)
{
    vector<vector<int>> result;
    int n = v.size();
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && v[i] == v[i-1]) continue;

        int l = i+1, r = n-1;

        while (l < r)
        {
            int sum = v[i] + v[l] + v[r];

            if (sum == 0)
            {
                result.push_back({v[i], v[l], v[r]});

                while (l<r && v[l] == v[l+1]) l++;
                while (l<r && v[r] == v[r-1]) r--;

                l++, r--;
            }
            else if (sum < 0) l++;
            else r--;
        }
    }
    return result;
} 
void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v = {2,-2,0,3,-3,5};
    for (vector<int> x : threeSums(v)) print_vector(x);
}