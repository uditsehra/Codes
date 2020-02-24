/*
Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size 1 x m . A tile can either be placed horizontally or vertically.

Input Format
First line of input contains an integer T denoting the number of test cases. Then T test cases follow.
The first line of each test case contains two integers N and M.

Constraints
1 <= T<= 1000
1 <= N,M <= 100000

Output Format
Print answer for every test case in a new line modulo 10^9+7.

Sample Input
2
2 3
4 4
Sample Output
1
2



This solution given below will give you TLE time limit exceeded so you have to apply Dynamic Programming.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define k 1000000007

ll countWays(long int n, long int m)
{
	if(n==m)
	{
		return 2;
	}
	if(1<=n && n<m)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}

	return (countWays(n-m, m-1)%k+countWays(n-1,m)%k)%k;
}

int main() {
	int testCases;
	cin >> testCases;

	while(testCases--)
	{
		long int n, m;
		cin >> n >> m;
		cout << countWays(n, m)<<endl;
	}
	return 0;
}