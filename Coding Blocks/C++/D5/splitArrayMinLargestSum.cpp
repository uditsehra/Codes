#include<bits/stdc++>
using namespace std;

bool isPossible(int arr[], int n, int m, int sum)
{
    int subSets = 1;
    long sumLargest = 0;

    for(int i=0; i<n; i++)
    {
        sumLargest += arr[i];

        if(sumLargest > sum)
        {
            subSets++;

            if(subSets>=m)
            {
                return false;
            }
            sumLargest = arr[i];
        }

    }
    return true;
}

int minimizeSum(int arr, int m, int n)
{
    int total = arr[0];
    int maxValue = arr[0];

    for(int i=1; i<n; i++)
    {
        total += arr[i];
        maxValue = max(minValue, arr[i]);
    }

    int start = maxValue;
    int end = total;
//    int mid = start + (end-start)/2;

    while(start<end)
    {
        if(isPossible(arr, n, m, start))
        {
        
        }        
    }
        

}

int main()
{
    int arr[] = {7,2,5,10,8};
    int m = 2;
    int n = 5;

    cout << minimizeSum(arr, m, n);

    return 0;
}
