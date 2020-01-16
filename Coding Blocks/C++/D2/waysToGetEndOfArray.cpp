// Program to get the number of pattern to reach the end of the 2D array from starting position 0x0 to NxM using recursion.

#include<iostream>
using namespace std;

int getPattern(int i, int j, int m, int n)
{
    if(i==m && j==n)
    {
        return 1;
    }

    if(i>m || j>n)
    {
        return 0;
    }
   // int hDis = m-i;
   // int vDis = n-j;

    int pat1 = getPattern(i+1,j,m,n);
    int pat2 = getPattern(i,j+1,m,n);
    //int pat3 = getPattern(i+i,j+1,m,n);

    return pat1+pat2;

}

int main()
{
    int i=1,j=1;
    int m=3, n=3;

    cout << getPattern(i,j,m,n) << endl;

    return 0;
}
