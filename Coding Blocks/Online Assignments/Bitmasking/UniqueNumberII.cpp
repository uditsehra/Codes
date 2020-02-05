/*
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number

*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	int m = 0;
	for(int i=0; i<n; i++)
	{
		m ^=arr[i];
	}

	int ans = m;
	int count = 0;
	if(!(m&1))
	{
		count++;
		m>>=1;
	}
	m=1;
	while(count--)
	{
		m<<=1;
	}

	int num1 =0;
	int num2 =0;
	for(int i=0; i<n; i++)
	{
		if((arr[i]&m)!=0)
		{
			num1^=arr[i];
		}
	}

	num2 = ans^num1;

	if(num1<num2)
	{
		cout << num1 << " " << num2 << endl;
	}
	else
	{
		cout << num2 << " " << num1 << endl;
	}
	return 0;
}