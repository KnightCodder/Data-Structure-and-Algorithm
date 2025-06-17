#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(const vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;
    int maxFreq = 0, result = INT32_MAX;
    for (auto& [value, count] : freq)
    {
        if (count > maxFreq)
        {
            maxFreq = count;
            result = value;
        }
        else if (count == maxFreq) result = min(result, value);
    }
    return result;
}

int main()
{
    vector<int> a = {1,2,2,3,3,1};
    cout << mostFrequentElement(a) << endl;
}