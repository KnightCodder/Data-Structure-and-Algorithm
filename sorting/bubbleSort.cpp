#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        if (!swaped) break;
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
    bubbleSort(a, n);
    print_array(a, n);
}