/*
Input Format:
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints:
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void printArray(vector<vector<int>> inputArray, int n, int m)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << inputArray[i][j]<<" ";
        }
        cout << endl;
    }
}


int main() {

    int n, m;
    cin >> m >> n;

    int row , col;
    row = m; col = n;
    
    vector<vector < int >> inputArray(m, vector<int>(n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> inputArray[i][j];
        }
    }

    int left = 0;
    int right = 0;

    while(left < m && right < n)
    {
        for(int i=left ; i<m; i++)
        {
            cout << inputArray[i][right] << ", ";
        }
        right++;

        for(int i=right; i<n; i++)
        {
            cout << inputArray[m-1][i] << ", ";
        }
        m--;

        for(int i=m-1; i>=left; i--)
        {
            cout << inputArray[i][n-1] << ", ";
        }
        n--;

        for(int i=n-1; i>=right; i--)
        {
            cout << inputArray[left][i] << ", ";
        }
        left++;
    }

    cout << "END" << endl;
    
    //cout << endl;

    //printArray(inputArray, row, col);
	return 0;
}

//11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END