/*
PRIME VISITS
PMO gives two random numbers a & b to the Prime Minister.
PM Modi wants to visit all countries between a and b (inclusive)
However due to shortage of time he can't visit each and every country
So PM Modi decides to visit only those countries,for which country number has two divisors.
So your task is to find number of countries Mr. Modi will visit.

Input Format:
The first line contains N , no of test cases. The next N lines contain two integers a and b denoting the range of country numbers.

Constraints:
a<=1000000 & b<=1000000.
N<=1000

Output Format
Output contains N lines each containing an answer for the test case.

Sample Input
2
1 10
11 20
Sample Output
4
4

*/

#include<bits/stdc++.h>
using namespace std;

int getPrimeCount(long int n)
{
    int prime[n+1];
	
	for(int i=0; i<=n; i++)
	{	
		prime[i]=1;
	}

	prime[0] = 0;
	prime[1] = 0;

	int k = sqrt(n);

	for(int i=2; i<=k; i++)
	{
		if(prime[i]==1)
		{
			for(int j=2; i*j<=n; j++)
			{
				prime[i*j] = 0;
			}
		}
	}

	int count=0;

	for(int i=2; i<n; i++)
	{
		if(prime[i])
		{
			count++;
		}
	}

	return count;
}

int main()
{
    int n;
    cin >> n;

	while(n--)
	{
        long int start, end;
		cin >> start >> end;

        int a = getPrimeCount(start);
        int b = getPrimeCount(end);

       int ans = b - a;
	   cout << ans << endl;
    }
    return 0;
}