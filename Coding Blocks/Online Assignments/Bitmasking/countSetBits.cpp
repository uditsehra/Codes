/*
COUNT SET BITS
count number of 1s in binary representation of an integer

Input Format:
Input N = Number of Test Cases, followed by N numbers

Constraints:
Output Format
Number of Set Bits in each number each in a new line

Sample Input
3
5
4
15
Sample Output
2
1
4
*/

#include<iostream>
using namespace std;

int getBitCount(int a)
{
	int ans=0;

	while(a!=0)
	{
		ans += (a&1);
		a = a>>1;
	}

	return ans;
}

int main() {
	int n = 5;
	//cin >> n;

/* 
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
 */
	int arr[n] = {1,2,3,4,5};

	for(int i=0; i<n; i++)
	{
		int j = arr[i];
		cout << getBitCount(j) << endl;
	}

	return 0;
}