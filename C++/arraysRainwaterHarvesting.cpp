/*

RAIN WATER HARVESTING
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format:
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints:
Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5

*/


#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
}

int getWater(int arr[], int n, int leftMax[], int rightMax[])
{
    int waterAccumulated[n]={0};
    int totalWater = 0;

    waterAccumulated[0] = 0;
    waterAccumulated[n-1] = 0;

    for(int i=0; i<n-1; i++)
    {   
        waterAccumulated[i] = min(leftMax[i],rightMax[i]) - arr[i];
        totalWater += waterAccumulated[i];
    }

    return totalWater;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    //Precompute Max left and right;
    int leftMax[n]={0};
    int rightMax[n] = {0};

    leftMax[0] = arr[0];
    rightMax[n-1] = arr[n-1];

    for(int i=1; i<n; i++)
    {
        leftMax[i] = max(leftMax[i-1], arr[i]);
    }

    for(int i=n-2; i>=0; i--)
    {
        rightMax[i] = max(rightMax[i+1], arr[i]);
    }

    //printArray(arr, n);
    //printArray(leftMax, n);
    //printArray(rightMax, n);
    cout << getWater(arr, n, leftMax, rightMax) << endl;

    return 0;
}