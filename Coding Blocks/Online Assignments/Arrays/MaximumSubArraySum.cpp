/*

MAXIMUM SUBARRAY SUM
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format:
The first line consists of number of test cases T. Each test case consists of two lines.
The first line of each testcase contains a single integer N denoting the number of elements for the array A.
The second line of each testcase contains N space separated integers denoting the elements of the array.

Constraints:
1 <= N <= 100000

1 <= t <= 20

 -100000000 <= A[i] <= 100000000

Output Format
Output a single integer denoting the maximum subarray sum for each testcase in a new line.

Sample Input
2
4
1 2 3 4
3
-10 5 10
Sample Output
10
15

*/

#include<iostream>
using namespace std;

int getSubArrayMaxSum(long int arr[], long int n)
{
	long int sum = 0;
	long int maxSum = 0;

	for(long int i=0; i<n; i++)
	{
		sum = max(sum+arr[i], arr[i]);

		if(sum > maxSum)
		{
			maxSum = sum;
		}
	}

	return maxSum;
}

int main() {
	int testCases;
	cin >> testCases;

	while(testCases--)
	{
		long int n;
		cin >> n;

		long int arr[n];

		for(long int i=0; i<n; i++)
		{
			cin >> arr[i];
		}

		cout << getSubArrayMaxSum(arr, n) << endl;
	}
	return 0;
}