#include<bits/stdc++.h>
using namespace std;

int getFirstIndex(int arr[], int n, int data)
{
    int start = 0;
    int end = n-1;

    int ans = -1;

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid]==data)
        {   //To initialize and save first occurence
            ans = mid + 1;
            end = mid - 1;
            cout<< "First occurence at ";
            return ans;
        }
        else if(arr[mid]<data)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int getLastIndex(int arr[], int n, int data)
{
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end)
    {
        int mid = (start + end)/2;

        if(arr[mid] == data)
        {
            ans = mid + 1;
            start = mid + 1;
        }
        else if(arr[mid]>data)
        {
            end = mid - 1;
        }
    }
    cout << endl;
    cout << "Last occurence index at ";
    return ans;
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3,4,4,4,5,6,6,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << getFirstIndex(arr, n, 4) << endl;
    cout << getLastIndex(arr, n, 4) << endl;

    return 0;    
}

