#include <bits/stdc++.h>
using namespace std;

void reverseRecursion(int arr[], int low, int high)
{
    if (low >= high) return;
    swap(arr[low], arr[high]);
    reverseRecursion(arr, low+1, high-1);
}

void reverse(int arr[], int n)
{
    reverseRecursion(arr, 0, n-1);
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {1,2,3,4,5};
    print_array(arr, n);
    reverse(arr, n);
    print_array(arr, n);
}