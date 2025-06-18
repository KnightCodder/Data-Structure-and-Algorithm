#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low >= high) return;
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
    while (true)
    {
        do { i++; } while (arr[i] < pivot);
        do { j--; } while (arr[j] > pivot);
        if (i >= j) break;
        swap(arr[i], arr[j]);
    }
    quickSort(arr, low, j);
    quickSort(arr, j + 1, high);
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n = 6;
    int a[] = {65, 24, 1, 48, 24, 0};
    print_array(a, n);
    quickSort(a, 0, n-1);
    print_array(a, n);
}