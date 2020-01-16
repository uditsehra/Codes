#include<iostream>
using namespace std;

int getSum(int arr[2][3], int n, int m)
{

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            arr[i][j] += arr[i][j-1];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            arr[j][i] += arr[j-1][i];
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << endl;
        for(int j=0; j<m;  j++)
        {
            cout << arr[i][j] << "i = " << i << " j = " << j << "\t";
        }
    }

    return 1;

}

int main()
{
    int arr[2][3] = {
                    {1,1,1},
                    {1,1,1}
                    };
    int n=2;
    int m=3;

    cout << getSum(arr, n, m)<< endl;

    return 0;
}
