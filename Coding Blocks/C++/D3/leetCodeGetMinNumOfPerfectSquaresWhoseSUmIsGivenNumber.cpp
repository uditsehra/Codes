

#include<bits/stdc++.h>
using namespace std;

/* int getMinimum(int n)
{
    int arr[] = {1,4,9,16,25,36,49,64,91,100};

    int count[10] = {INT_MAX};

    if(n==1)
    {
        return 0;
    }

    for(int i=0; i<10; i++)
    {
        
        {
            count[i] = getMinimum(n/arr[i]) + 1;
        }
    }
} */

// Code By SIr

int getMinimum(int n)
{
    int minValue = INT_MAX;
    int square = 1;

    for(int i=1; square<=n; i++)
    {
        minValue = min(minValue, getMinimum(n-i) + 1);
        return minValue;
    }
}

int main()
{
    int num = 12;

    getMinimum(num);

    return 0;
}