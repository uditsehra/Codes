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


// Staircase approach.
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
	{ // By above for loop we check the last element of each row, for given example lets say 10, 15, 20, 23 with numberX i.e. 17 if 17 is less than last element of each row.
		if(numberX < arr[i][n-1])
		{
			for(int j=n-2; j>=0; j--)
			{
                // Now for 20, 17 is less than 20 so now we check in that row for 17 so the given for loop will check all the elements in decending order. 20, 18, 16, 6.
                // Here the if will check for 17 if its greater than 16 or not. Now if its greater than 16 than we increase the row number.
                if(numberX>arr[i][j])
                {
                    i++;
                }
                
                if(numberX==arr[i][j]) // This if will check if given position is the our desired number or not if its present there than it will return true.
				{
                    cout << "We found "<<numberX<<" in the given array"<<endl;
					return true;
				}
			}
            return false;
		}
		
		if(numberX==arr[i][n-1])
		{
			return true;
		}
	}
	return false;
}



/*

// Brute Force method satisffies the time complexity and all.

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

/*

For Given Input Its Working but for the other one it's not.

4 4
1 3 5 10
2 8 9 15
6 16 18 20
11 17 19 24
17

for the below input its not working why?

3 3
3 30 38
44 52 54
57 60 69
62

What will be the correct code.

*/