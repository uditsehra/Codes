// Program to know whether a given array is sorted or not.

#include<bits/stdc++.h>
#include<array>
using namespace std;

bool isSorted(int arr[], int si, int n)
{
    if (si == n-1)
    {
        return true;
    }

    if(arr[si] > arr[si+1])
    {
        return false;
    }

    return isSorted(arr, si+1, n);

    
}

int main()
{

    int arr[] = {1,23,4,56,21,57,2,3,10,69};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr, 0, n);

    return 0;
}
