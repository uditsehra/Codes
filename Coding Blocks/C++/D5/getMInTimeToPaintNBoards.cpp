#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int time)
{
    int painter = 1;
    int paintTime = 0;

    for(int i=0; i<n; i++)
    {
        paintTime = arr[i];

        if(paintTime > time)
        {
            painter++;

            if(painter >= k)
            {
                return false;
            }

            paintTime = arr[i];
        }
    }

    return true;
}

int getMinTimeToPaintNBoards(int arr[], int n, int k, int time)
{
    int total = arr[0];
    int maxValue = arr[0];

    for(int i=1; i<n; i++)
    {
        total += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int start = maxValue;
    int end = total;

    while(start<=end)
    {
        int mid = (start + end)/2;
        if(isPossible(arr, mid, k, start))
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << (Start * time)%1000003
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/sizeof(arr[0]);
    // No of painters available = k;
    int k = 4;
    // Time alloted to each painter;
    int time = 3;

    cout << getMinTimeToPaintNBoards(arr, n, k, time);

    return 0;
}