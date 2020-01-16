/* 
ARRAYS-TARGET SUM PAIRS
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number.
Write a function which prints all pairs of numbers which sum to target.

Input Format:
The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

Constraints:
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5

Sample Output
1 and 4
2 and 3
*/




#include<iostream>
#include<algorithm>
using namespace std;

/*void getSumPair(int arr[], int n, int target)
{

	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			int sum = arr[i] + arr[j];
			
			if(sum==target)
			{
				cout << arr[i] << " and " << arr[j]<<endl;
			}
		}
	}
}*/

void getSumPair(int arr[], int n, int target)
{
	int left = 0;
	int right = n-1;
	int sum = arr[left]+arr[right];

	while(left<right)
	{
		sum = arr[left] + arr[right];

		if(sum==target)
		{
			cout << arr[left] << " and " << arr[right]<<endl;
			left++;
		}

		if(sum<target)
		{
			left++;
		}

		if(sum>target)
		{
			right--;
		}
	}

}

int main() {

	int n;
	cin >> n;

	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	int target;
	cin >> target;
	sort(arr, arr+n);
	getSumPair(arr, n, target);

	return 0;
}