#include<bits/stdc++.h>
using namespace std;

int getMaximumSubArraySum(int arr[], int n, int commulativeSum[], int maxSum, int currSum, int left, int right)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {   
            currSum = 0;
            
            currSum = commulativeSum[j] - commulativeSum[i-1];

            if(currSum>maxSum)
            {
                maxSum = currSum;
                left=i;
                right=j;
            }
            
        }
    }

    for(int k=left; k<=right; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int preComputedSum[n]={0};
    
    int maxSum = 0;
    int currSum = 0;
    
    int left = -1;
    int right = -1;
    
    cin>>arr[0];
    preComputedSum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
        preComputedSum[i] = preComputedSum[i-1]+arr[i];
    }

    cout << getMaximumSubArraySum(arr, n, preComputedSum,maxSum, currSum, left, right) << endl;

    return 0;
}