#include<bits/stdc++.h>
using namespace std;

void generateSubArrays(int arr[], int size, int start, int end)
{
    // Base condition to end the recursion.
    if(end == size)
    {
        return;
    }
    // Increment the end point and start from 0.
    else if(start > end)
    {
        //Recursion call to print subArrays by increasing end point.
        generateSubArrays(arr, size, 0, end+1);
    }
    // Print the subarray and increment the starting point.
    else
    {
        // Given loop will print a subArray.
        for(int i=start; i<end; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << arr[end] << endl;
        
        // Recursion call to generate subArray by increasing subArray.
        generateSubArrays(arr, size, start+1, end);
    }
    return;
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
    int sizeOfArray = (sizeof(arr)/sizeof(arr[0]));
    generateSubArrays(arr, sizeOfArray, 0, 0);

    return 0;
}
