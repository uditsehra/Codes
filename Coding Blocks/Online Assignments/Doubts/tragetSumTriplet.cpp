//Given test case is passed.


#include<iostream>
#include<algorithm>
using namespace std;

void getTripletPair(int arr[], int n, int target)
{
	for(int i=0; i<n; i++)
	{
		int left = i+1;
		int right = n-1;

		while(left<right)
		{
			int sum = arr[i] + arr[left] + arr[right];

			if(sum==target)
			{
				cout << arr[i] << ',' << arr[left] << " and " << arr[right]<<endl;
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

	getTripletPair(arr, n, target);
	
	return 0;
}