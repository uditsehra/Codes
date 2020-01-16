#include<bits/stdc++.h>
using namespace std;

int getMedian(int arr[][3], int n, int m)
{   
    int f= n*m;
    int newArr[f];

    int k=0;

    for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
       {
           newArr[k++] = arr[i][j];
       }    
    }

    sort(newArr, newArr+f);

    int start =0;
    int end = m*n;

    int mid = start + (end-start)/2;

    return newArr[mid];
}

int main()
{
    int n, m;
/*     cout << "Enter the value of size of 3D matrix such that ixj = odd" << endl;
    cin >> n >> m;
 */
    n = 3;
    m = 3;

    int arr[3][3] = {
                        {1, 3, 5},
                        {2, 6, 9},
                        {3, 6, 9},

    };

    //if(((m*n)&1)!=1)
    cout << getMedian(arr, n, m) << endl;
    return 0;
}