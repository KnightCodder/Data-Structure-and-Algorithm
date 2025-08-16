#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<vector<int>> &arr, int index, int low, int high)
{
    if (low >= high) return;
    int pivot = arr[low][index];
    int i = low - 1, j = high + 1;
    while (true)
    {
        do { i++; } while (arr[i][index] < pivot);
        do { j--; } while (arr[j][index] > pivot);
        if (i >= j) break;
        swap(arr[i][index], arr[j][index]);
    }
    quickSort(arr, index, low, j);
    quickSort(arr, index, j + 1, high);
}

vector<vector<int>> mergeOverlap(vector<vector<int>> arr)
{
    int n = arr.size();
    quickSort(arr, 0, 0, n-1);
    quickSort(arr, 1, 0, n-1);

    for (vector<vector<int>>::iterator it = arr.begin(); it != arr.end();)
    {
        if (it != arr.begin())
        {
            if ((*it)[0] <= (*prev(it))[1] || (*it)[0] == (*prev(it))[0])
            {
                (*prev(it))[1] = (*it)[1];
                it = arr.erase(it);
            }
            else it++;
        }
        else it++;
    }

    return arr;
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    vector<vector<int>> arr = {{5,7},{1,3},{4,6},{8,10}};
    vector<vector<int>> ans = mergeOverlap(arr);
    for (vector<int> x : ans) print_vector(x);
}