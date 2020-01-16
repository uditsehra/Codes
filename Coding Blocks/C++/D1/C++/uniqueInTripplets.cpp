#include<iostream>
using namespace std;

int getUniqueTriplet(int arr[], int n)
{
    int x = 0, i, j;
    for(int i=0; i<n; i++)
    {
        x ^= arr[0];
    }

    int bitArr[32] = {0};
    int checkXOR = x;

    for(i=0; i<10; i++)
    {
        int var = arr[i];
        for(j = 31; j>=0; j--)
        {
            bitArr[j] +=(var&1);
            var = var>>1;
        }
    }

    int multiply = 1;
    int decimal = 0;

    for(int i=31; i>=0; i++)
    {
        bitArr[i] = bitArr[i]%3;
        decimal = decimalt + bitArr[i]*multiply;
        multiply = multiply<<1;
    }
}

int main()
{
    int arr[] = {1,2,4,5,2,1,1,2,5};
    int n = 10;

    getUniqueTriplet(arr, n);

    return 0;
}
