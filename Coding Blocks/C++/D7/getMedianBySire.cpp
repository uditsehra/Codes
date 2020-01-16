// Get median of row wise sorted matricx. Question on geeksforgeeks refer median row wise sorted geeeksforgeeks.org

#include<bits/stdc++.h>
#include<climits>
using namespace std;

/* int getMedian(int arr[][3], int n , int m)
{
    int minVal = arr[0][0];
    int maxVal = arr[0][0];

    for(int i=0; i<n; i++)
    {
        minValue = min(arr[i][0], minVal);
        maxValue = max(arr[i][2], maxVal);
    }

    int start = minVal;
    int end = maxVal;


} */

int medianOfRowWiseSortedMatrix(int arr[max][max], int n, int m)
{
    int minRange = INT_MAX;
    int maxRange = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        minRange = min(arr[i][0], minRange);
        maxRange = max(arr[i][2], maxRange);
    }
}

int main()
{
    int arr[3][3] = {
                        {1,3,5},
                        {2,4,6},
                        {3,4,6}
    };

    int n = 3;
    int m = 3;

//    cout << getMedian(arr, n, m) << endl;
    cout << medianOfRowWiseSortedMatrix(arr, n, m) << endl;
    return 0;
}