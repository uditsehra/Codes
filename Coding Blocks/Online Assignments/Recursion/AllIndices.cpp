/*
ALL INDICES PROBLEM
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

Input Format:
Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

Constraints:
None

Output Format
Display all the indices at which number M is found in a space separated manner

Sample Input
5
3
2
1
2
3
2
Sample Output
1 3
*/

#include<iostream>
using namespace std;

void getAllIndices(int arr[], int n, int target, int start, int end)
{
    if(start>end)
    {
        return;
    }

    if(arr[start]==target)
    {
        cout << start << " ";
    }

    getAllIndices(arr, n, target, start+1, end);

}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    getAllIndices(arr, n, m, 0, n-1);

	return 0;
}