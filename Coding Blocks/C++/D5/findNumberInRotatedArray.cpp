#include<bits/stdc++.h>
using namespace std;

int findNumberInRotatedArray(int arr[], int start, int end, int data)
{

    if(start>end)
    {
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == data)
    {
        cout << "Given data is present in array at position ";
        return mid+1;
    }

    if(arr[start] <= arr[mid])
    {
        if(arr[start] <= data and data < arr[mid])
        {
            return findNumberInRotatedArray(arr, start, mid-1, data);
        }
        else
        {
            return findNumberInRotatedArray(arr, mid+1, end, data);
        }        
    }
    else
    {
        if(arr[mid] < data and arr[end] >= data)
        {
            return findNumberInRotatedArray(arr, mid+1, end, data);
        }
        else
        {
            return findNumberInRotatedArray(arr, start, mid-1, data);
        }
        
    }
}

int main()
{
    int arr[] = {6,7,1,2,3,4,5};
    int n = 7;

    cout << findNumberInRotatedArray(arr, 0, n-1, 2);
}