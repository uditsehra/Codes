#include<bits/stdc++.h>
using namespace std;

int getSubArraySumByKadanes(int arr[], int n)
{
    int sum = 0;
    int maxSum = 0;

    for(int i=0; i<n; i++)
    {
        sum = max(sum+arr[i], arr[i]);

        if(sum > maxSum)
            maxSum = sum;
    }

    return maxSum;
}

int main()
{
    int arr[5] = {1,2,-3,4,-5};
    int n=5;
    cout << getSubArraySumByKadanes(arr, 5);

    return 0;
}
