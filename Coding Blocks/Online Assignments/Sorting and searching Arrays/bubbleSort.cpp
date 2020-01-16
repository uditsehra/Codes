#include<iostream>
using namespace std;

void printArray(long long int arr[], long long int n)
{
	for(long long int i=0; i<n; i++)
	{
		cout << arr[i] << endl;
	}
}

void bubbleSort(long long int arr[], long long int n)
{
	long long int i, j;

	for(i=0; i<n; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printArray(arr, n);
}
int main() {

	long long int n;
	cin >> n;

	long long int arr[n] = {0};

	for(long long int i=0; i<n; i++)
	{
		cin>> arr[i];
	}

	bubbleSort(arr, n);

	//printArray(arr, n);

	return 0;
}