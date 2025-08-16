#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(const vector<int> &v)
{
    int max = INT32_MIN, second_max = INT32_MIN;
    
    for (int x : v)
    {
        if (x > max)
        {
            second_max = max;
            max = x;
        }
        else if (x < max && x > second_max) second_max = x;
    }

    return second_max;
}

int main()
{
    cout << secondLargestElement(vector({8,7,0,-4,6})) << endl;
}