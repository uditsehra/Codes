/*
SORTED ARRAY
Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted, and false otherwise.

Input Format:
N x y z

Constraints:
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array

Output Format
true OR false

Sample Input
5
1 2 3 4 5
Sample Output
true

*/

#include<iostream>
using namespace std;

bool getIfSorted(long int arr[], long int n, long int start, long int end)
{
    if(start==n-1)
    {
        return true;
    }

    if(arr[start]>arr[start+1])
    {
        return false;
    }

    bool ans = getIfSorted(arr, n, start+1, end);
    return ans;
}

int main() {
    long int n;
    cin >> n;

    long int arr[n];

    for(long int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bool akk = getIfSorted(arr, n, 0 , n-1);
    
    if(akk==0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    
	return 0;
}