#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int x=arr[0];
    int y=arr[0] ,z,k;

    for(int i=1; i<n; i++)
    {
        x ^= arr[i];
    }



    return 1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,7,1,2,3,4};
    int n=10;

    unique(arr, n);

    return 0;
}
