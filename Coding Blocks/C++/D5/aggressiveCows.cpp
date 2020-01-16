#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int mid, int k)
{
	int cows = 1;
	int dist = arr[0];

	for(int i=1; i<n; i++)
	{
		if(arr[i] - dist >= mid){

			
		}
	}
}







int getAgressiveCows(int arr[], int n, int cows)
{
	sort(arr, arr+n);

	int minDist = 1;
	int maxDist = arr[n-1] - arr[0];

	int ans = 1;

	while(minDist<maxDist)
	{
		int mid = minDist + (maxDist - minDist)/2;

		if(isPossible(arr, n, mid, cows))
		{

		}
	}

}

int main()
{

}





/*#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

const int N = 100005;

bool check(int a[], int n, int dis, int k) {
	int  i, placed = 1, prev = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] - prev >= dis) {
			placed++;
			prev = a[i];
		}
	}
	return placed >= k;
}

int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t; while (t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		cin >> n >> m;
		int a[n];
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int lf = 1, rt = 1e10;
		while (lf <= rt) {
			int mid = (lf + rt) / 2;
			if (check(a, n, mid, m)) {
				ans = mid;
				lf = mid + 1;
			}
			else {
				rt = mid - 1;
			}
		}
		cout << ans;
	}
} */