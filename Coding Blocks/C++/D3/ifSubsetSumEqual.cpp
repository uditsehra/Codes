// Find if the array can be partitioned into two subsets such that sum of both subsets are equal.

#include<bits/stdc++.h>
using namespace std;

int sum = 22;

bool isPartitioned(int arr[], int n, int si, int ans, int total)
{
    if(n<=1)
    {
        return false;
    }
    
    int a = arr[0];
    int arr1[] = {5, 11, 5};

    isPartitioned(arr1, ans, 3);
    isPartitioned(arr1, ans+a, 3);

    if(2*ans==sum)
        return true;
    else
        return false;   

}

int main()
{
    int arr[] = {1, 5, 11, 5};
//    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isPartitioned(arr, 4, 0, 0, 0);


}