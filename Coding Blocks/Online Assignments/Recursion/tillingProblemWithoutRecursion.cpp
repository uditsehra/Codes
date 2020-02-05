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

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define k 1000000007

ll countWays(ll n, ll m)
{
	ll count[n+1];
	count[0] = 0;

	for(ll i=1; i<=n; i++)
	{
		if(i>m)
			count[i] = (count[i-1]%k + count[i-m]%k)%k;
		else if(i<m)
			count[i] = 1;
		else
			count[i] = 2;
	}
	return count[n]%k;
}

int main() {
	ll testCases;
	cin >> testCases;

	while(testCases--)
	{
		ll n, m;
		cin >> n >> m;
		cout << countWays(n, m) << endl;
		cout << endl;
	}
	return 0;
}