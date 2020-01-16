#include<iostream>
using namespace std;

int getSubArray(int arr[], int n, int num)
{
    if(n=10)
    {
        return n;
    }

    if(n>10)
    {
        return 0;
    }
    
    int i=0;
    int result = getSubArray(arr, i+1, num);



}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int num = 2;

    getSubArray(arr, n, num);

    return 0;
}