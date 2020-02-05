#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll maximum(ll arr[1000000], ll n)
{
	ll max = arr[0];
	for(int i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}

	return max;
}

ll Valid(ll arr[], ll n, ll mid)
{
	ll sum = 0;
	ll point = 1;

	for(int i=0; i<n ; i++)
	{
		sum += arr[i];

		if(sum > mid)
		{
			point++;
			sum = arr[i];
		}
	}
	return point;
}


long long int getPainterProblem(ll arr[], ll n, ll k, ll sumOfArr, ll t)
{
	ll start = maximum(arr, n);
	ll end = sumOfArr;
	ll ans;

	while(start<=end)
	{
		ll mid = (start+end)/2;
		ll painters = Valid(arr, n, mid);

		if(painters<=k)
		{
			ans = mid;
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}

	return (ans*t)%10000003;
}

int main()
{
	long long int n, k, t;
	cin >> n >> k >> t;

	long long int arr[n];

	long long int sumOfArr=0;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		sumOfArr += arr[i];
	}

	cout << getPainterProblem(arr, n, k, sumOfArr, t);

	return 0;
}