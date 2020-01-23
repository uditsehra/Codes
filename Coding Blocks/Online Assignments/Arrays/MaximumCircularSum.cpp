/*
MAXIMUM CIRCULAR SUM
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

Input Format:
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

Constraints:
1<=t<=100
1<=n<=1000
|Ai| <= 10000

Output Format
Print the maximum circular sum for each testcase in a new line.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
*/

#include<iostream>
using namespace std;

int getMaximumCircularSum(int arr[], int n)
{
	int sumMin = arr[0], sumMax = arr[0], total = arr[0], currentMin = arr[0], currentMax = arr[0];

	for(int i=1; i<n; i++)
	{
		currentMax = max(currentMax+arr[i] , arr[i]);
		sumMax = max(currentMax, sumMax);

		currentMin = min(currentMin+arr[i] , arr[i]);
		sumMin = min(currentMin , sumMin);

		total += arr[i];
	}

	return sumMax > 0 ? max(sumMax , total-sumMin) : sumMax;
}


int main() {
	int testCases;
	cin >> testCases;

	while(testCases--)
	{
		int n;
		cin >> n;

		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
		}

		cout << getMaximumCircularSum(arr, n) << endl;
	}
	return 0;
}