#include<iostream>
using namespace std;

int getMaxSum(int arr[], int n)
{
    int minSum=0, maxSum=0, total=0, currMinSum=0, currMaxSum=0;

    for(int i=0; i<n; i++)
    {
        currMaxSum = max(arr[i], currMaxSum+arr[i]);
        maxSum = max(currMaxSum, maxSum);

        currMinSum = max(currMinSum+arr[i], arr[i]);
        minSum = min(currMinSum, minSum);

        total += arr[i];
    }

    return maxSum>0 ? max(maxSum, total-minSum) : maxSum;



}

int main()
{
    int arr[3] = {-1, -3, -4};
    cout << getMaxSum(arr, 3) << endl;

    return 0;
}
