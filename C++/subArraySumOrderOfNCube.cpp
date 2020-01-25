#include<bits/stdc++.h>
using namespace std;

int getMaximumSubArraySum(int arr[], int n, int maxSum, int currSum)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {   
            if(currSum>maxSum)
            {
                maxSum = currSum;
            }
            currSum = 0;
            for(int k=i; k<=j; k++)
            {
                currSum += arr[k];
            }
        }
    }

    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int maxSum = 0;
    int currSum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << getMaximumSubArraySum(arr, n, maxSum, currSum) << endl;

    return 0;
}