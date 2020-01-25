/*

MATRIX SEARCH
Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format:
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints:
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0

*/

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector< vector <int> > arr, int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}



bool matrixSearch(vector< vector <int> > arr, int n, int m, int numberX)
{
    /*
    if(n==1)
    {
        for(int i=0; i<m; i++)
        {
            if(arr[0][i]==numberX)
            {
                return true;
            }
        }
    }
    */
    
	for(int i=0; i<n; i++)
	{
		if(numberX < arr[i][m-1])
		{
			for(int j=0; j<n; j++)
			{
				if(numberX==arr[i][j])
				{
					return true;
				}
			}
		}
		
		if(numberX==arr[i][m-1])
		{
			return true;
		}
	}
	return false;
}



/*

bool matrixSearch(vector< vector <int> > arr, int n, int m, int numberX)
{
	//int midHorriz = 0;
	//int midVerti = 0;
	//bool ans;

	if(n==0 and m==0)
	{
		return false;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]==numberX)
			{
				return true;
			}
		}
	}

	return false;
}

*/
int main() {
	int n, m;
	cin >> n >> m;
	
	vector< vector <int> > arr (n, vector <int> (m));

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int numberX;
	cin >> numberX;

	//printArray(arr, n, m);

	cout << matrixSearch(arr, n, m, numberX) << endl;
	
	return 0;
}