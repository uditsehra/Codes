/*

ROTATE IMAGE!
Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.



Input Format:
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints:
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 


*/
/*

#include<bits/stdc++.h>
using namespace std;

void rotateImageArray(int n, int arr[4][4])
{
	int rotatedArray[n][n] ={0};
	int k = n-1;

	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>=0; j--)
		{
			rotatedArray[k-j][i] = arr[i][j];
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << rotatedArray[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;

	int arr[4][4] = {
                    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}
                    };

	/* for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}
 */
	rotateImageArray(n, arr);

	return 0;
}

*/

// By using vectors also you can do it.

#include<bits/stdc++.h>
using namespace std;

void rotateImageArray(int n, vector< vector <int> > arr)
{
	int rotatedArray[n][n] ={0};
	int k = n-1;

	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>=0; j--)
		{
			rotatedArray[k-j][i] = arr[i][j];
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << rotatedArray[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;

	vector<vector <int>> arr(n, vector<int>(n));

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}

    //int *ptr_arr = &arr[0][0];
	rotateImageArray(n, arr);

	return 0;
}