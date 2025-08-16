#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSums(vector<int> v, int t)
{
    vector<vector<int>> result;
    int n = v.size();
    sort(v.begin(), v.end());

    for (int i=0; i < n - 3; i++)
    {
        if (i>0 && v[i] == v[i-1]) continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && v[j] == v[j-1]) continue;

            int l = j + 1, r = n - 1;

            while (l < r)
            {
                int sum = v[i] + v[j] + v[l] + v[r];

                if (sum == t)
                {
                    result.push_back({v[i], v[j], v[l], v[r]});

                    while (l < r && v[l] == v[l+1]) l++;
                    while (l < r && v[r] == v[r-1]) r--;
                    l++, r--;
                }
                else if (sum < t) l++;
                else r--;
            }
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
    vector<int> v = {1,-2,3,5,7,9};
    int target = 7;
    for (vector<int> x : fourSums(v, target)) print_vector(x);
}