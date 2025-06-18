#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++) if (arr[j] < arr[min_index]) min_index = j;
        swap(arr[i], arr[min_index]);
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n = 6;
    int a[] = {65,24,1,48,3,0};
    print_array(a, n);
    selectionSort(a, n);
    print_array(a, n);
    
}