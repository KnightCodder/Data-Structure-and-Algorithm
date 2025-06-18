#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int low, int high)
{
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    int temp[high - low + 1];
    int lit = low, rit = mid + 1, i = 0;

    while (lit <= mid && rit <= high)
    {
        if (arr[lit] <= arr[rit]) temp[i++] = arr[lit++];
        else temp[i++] = arr[rit++];
    }
    while (lit <= mid) temp[i++] = arr[lit++];
    while (rit <= high) temp[i++] = arr[rit++];

    for (int j = 0; j < i; j++) arr[low + j] = temp[j];
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
    mergeSort(a, 0, n-1);
    print_array(a, n);
}