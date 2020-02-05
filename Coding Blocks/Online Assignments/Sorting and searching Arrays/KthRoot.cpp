#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getKthRoot(ll n, ll k)
{
	ll start=1;
	ll end = n;
	ll ans = 0;
	
	while(start <= end)
	{
		ll mid = start + (end - start)/2;

		if(pow(mid, k)==n)
		{
			return mid;
		}	
		else if(pow(mid, k)>n)
		{
			end = mid - 1;
		}
		else if(pow(mid, k)<n)
		{
			ans = mid;
			start = mid+1;
		}
	}
	return ans;
}

int main() {
	int test;
	cin >> test;

	while(test--)
	{
		ll n, k;
		cin >> n >> k;

		if(k==1)
		{
			cout << n << endl;
		}
		else
		{
			cout << getKthRoot(n, k) << endl;		

		}		
	}
	return 0;
}