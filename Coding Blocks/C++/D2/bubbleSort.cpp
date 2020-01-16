// Bubble sort using recursion

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if(n==1)
    {
        return;
    }

    for(int j=0; j<=n-2 ; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
    }

    bubbleSort(arr, n-1);
}

void bubbleSortRecursiveBetter(int arr[], int j, int n)
{
    if(n==1)
    {
        return;
    }

    if(j==n-1)
    {
        return bubbleSortRecursiveBetter(arr, 0, n-1);
    }
    if(arr[j] > arr[j+1])
    {
        swap(arr[j], arr[j+1]);
    }

    bubbleSortRecursiveBetter(arr, j+1, n);
    return;
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int n=5;

    //bubbleSort(arr, n);
    bubbleSortRecursiveBetter(arr, 0, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}