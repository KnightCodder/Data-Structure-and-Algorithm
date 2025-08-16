#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> Union;
    int i1 = 0, i2 = 0;

    while (i1 < arr1.size() && i2 < arr2.size())
    {
        if (!Union.empty())
        {
            if (arr1[i1] == *(Union.end() - 1))
            {
                i1++;
                continue;
            }
            if (arr2[i2] == *(Union.end() - 1))
            {
                i2++;
                continue;
            }
        }
        if (arr1[i1] <= arr2[i2])
            Union.push_back(arr1[i1++]);
        else if (arr1[i1] > arr2[i2])
            Union.push_back(arr2[i2++]);
    }
    while (i1 < arr1.size())
    {
        if (arr1[i1] == *(Union.end() - 1)) i1++;
        else Union.push_back(arr1[i1++]);
    }
    while (i2 < arr2.size())
    {
        if (arr2[i2] == *(Union.end() - 1)) i2++;
        else Union.push_back(arr2[i2++]);
    }

    return Union;
}

void print_vector(const vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1,2,4};
    vector<int> arr2 = {1,2,2,3,5};
    print_vector(arr1);
    print_vector(arr2);
    print_vector(unionArray(arr1, arr2));
}