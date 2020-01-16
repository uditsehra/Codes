#include<bits/stdc++.h>
using namespace std;

int getIndexOfNumber(int arr[], int n, int data)
{
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid]==data)
        {
            return mid+1;
        }

        if(arr[mid]<data)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

    }

    return -1;
}


int main()
{
    int arr[] = {11,23,40,42,56,67,78,83,91,110};
    int n = 10;

    cout << getIndexOfNumber(arr, n, 40);

    return 0;
}
